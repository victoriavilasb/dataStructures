EXEC=./tp1
TMP_OUT=./tp1.testresult

for i in {0..29}; do
  testname=$(printf "%02d" $i)
  $EXEC < tests/$testname.in > $TMP_OUT
  if ! diff -qwB tests/$testname.out $TMP_OUT &>/dev/null; then
    echo "Test $testname failed"
  else
    echo "Test $testname passed"
  fi
done
rm $TMP_OUT