FUN_0074f59b:
0074F59B  56                        PUSH ESI
0074F59C  8B F1                     MOV ESI,ECX
0074F59E  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074F5A2  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074F5A6  E8 D9 F0 FF FF            CALL 0x0074e684
0074F5AB  33 C9                     XOR ECX,ECX
0074F5AD  33 C0                     XOR EAX,EAX
0074F5AF  89 4E 18                  MOV dword ptr [ESI + 0x18],ECX
0074F5B2  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
0074F5B5  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
0074F5B8  8B 44 24 14               MOV EAX,dword ptr [ESP + 0x14]
0074F5BC  89 4E 24                  MOV dword ptr [ESI + 0x24],ECX
0074F5BF  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
0074F5C2  83 4E 28 FF               OR dword ptr [ESI + 0x28],0xffffffff
0074F5C6  C7 46 2C FF FF FF 7F      MOV dword ptr [ESI + 0x2c],0x7fffffff
0074F5CD  D9 E8                     FLD1
0074F5CF  8B C6                     MOV EAX,ESI
0074F5D1  DD 5E 30                  FSTP double ptr [ESI + 0x30]
0074F5D4  5E                        POP ESI
0074F5D5  C2 10 00                  RET 0x10
