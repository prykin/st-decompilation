FUN_0074a5d8:
0074A5D8  56                        PUSH ESI
0074A5D9  8B F1                     MOV ESI,ECX
0074A5DB  57                        PUSH EDI
0074A5DC  8D BE 94 00 00 00         LEA EDI,[ESI + 0x94]
0074A5E2  57                        PUSH EDI
0074A5E3  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074A5E9  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
0074A5EC  85 C0                     TEST EAX,EAX
0074A5EE  74 0A                     JZ 0x0074a5fa
0074A5F0  8B 08                     MOV ECX,dword ptr [EAX]
0074A5F2  50                        PUSH EAX
0074A5F3  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074A5F6  83 66 6C 00               AND dword ptr [ESI + 0x6c],0x0
LAB_0074a5fa:
0074A5FA  57                        PUSH EDI
0074A5FB  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A601  5F                        POP EDI
0074A602  33 C0                     XOR EAX,EAX
0074A604  5E                        POP ESI
0074A605  C3                        RET
