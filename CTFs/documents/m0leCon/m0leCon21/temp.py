import hashlib
import random

h=None
while(h is None or h[-10:]!='HyuZoeicxT'):
    p=random.randrange(1, 0xffffffffffffffffffffffff)
    h=hashlib.sha256(p.to_bytes(12, 'big')).hexdigest()

print('SHA256(' + hex(p) + ')=' + h)