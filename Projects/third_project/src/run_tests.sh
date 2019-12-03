EXEC=./a.out
TMP_OUT=a.out.testresult

echo "Parte 1: Contagem de Palavras"
for i in {1..18}; do
  testname=$(printf "%02d" $i)
  $EXEC < ../nome_sobrenome/tests/part1/$testname.in > $TMP_OUT
  if ! diff -qwB ../nome_sobrenome/tests/part1/$testname.out $TMP_OUT &>/dev/null; then
    echo "Test $testname failed"
  else
    echo "Test $testname passed"
  fi
done

# echo "Parte 2: Codigo de Huffman"
# for i in {1..18..1}; do
#   testname=$(printf "%02d" $i)
#   $EXEC < tests/part2/$testname.in > $TMP_OUT
#   if ! diff -qwB tests/part2/$testname.out $TMP_OUT &>/dev/null; then
#     echo "Test $testname failed"
#   else
#     echo "Test $testname passed"
#   fi
# done

rm $TMP_OUT
