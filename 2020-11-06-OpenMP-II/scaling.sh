NS=100000000
echo "Starting strong scaling with system size: $NS"

for NTH in 1 2 4 8; do
    echo -n "$NTH   ";
    ./a.out $NS $NTH;
done > scaling-$NS.txt

echo "Done"
