def modexp_lr(a, b, n):
   r = 1
   for bit in reversed(bits_of_n(b)):
      r = r * r % n
      if bit == 1:
         r = r * a % n
      print('.', end="", flush=True)
   print('')
   return r
