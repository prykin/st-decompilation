FUN_0056a5c0:
0056A5C0  68 00 E0 85 00            PUSH 0x85e000
0056A5C5  FF 15 78 BC 85 00         CALL dword ptr [0x0085bc78]
0056A5CB  8B 0D 00 E0 85 00         MOV ECX,dword ptr [0x0085e000]
0056A5D1  33 C0                     XOR EAX,EAX
0056A5D3  85 C9                     TEST ECX,ECX
0056A5D5  0F 9F C0                  SETG AL
0056A5D8  C3                        RET
