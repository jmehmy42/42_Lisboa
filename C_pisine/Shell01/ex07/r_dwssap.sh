
FT_LINE1=7
FT_LINE2=15

# Storing the output of cat /etc/passwd in the variable output
output=`cat /etc/passwd`

# Removing comments from the output
output=`echo "$output" | grep -v '^#'`

# Filtering even lines from the output
output=`echo "$output" | awk 'FNR % 2 == 0'`

# Extracting login names from the output
output=`echo "$output" | cut -d ':' -f1`

# Reversing the login names
output=`echo "$output" | rev`

# Sorting the reversed login names in reverse alphabetical order
output=`echo "$output" | sort -r`

# Filtering the output between FT_LINE1 and FT_LINE2
output=`echo "$output" | awk 'FNR >= ENVIRON["FT_LINE1"] && FNR <= ENVIRON["FT_LINE2"]'`

# Replacing newlines with commas and adding a space after each comma
output=`echo "$output" | tr '\n' ',' | sed 's/,/, /g'`

# Replacing the last comma with a period
output=`echo "$output" | sed 's/, $/./' | tr -d '\n'`

# Printing the final output
echo "$output"

