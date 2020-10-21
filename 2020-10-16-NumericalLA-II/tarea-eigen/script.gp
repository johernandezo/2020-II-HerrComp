set log xy
f(x) = a*x**b
fit f(x) 'datos-sin-O3.txt' via a,b
set xlabel 'N'
set ylabel 'CPU time (s)'
set term pdf
set out "fig.pdf"
plot 'datos-sin-O3.txt' w lp lw 4 t '(1) Datos sin O3', 'datos-con-O3.txt' w lp lw 4 t '(2) Datos con O3', f(x) lw 5 t 'Ajuste a (1)'
 
