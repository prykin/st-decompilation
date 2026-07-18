FUN_0074a36e:
0074A36E  56                        PUSH ESI
0074A36F  8B F1                     MOV ESI,ECX
0074A371  57                        PUSH EDI
0074A372  8D BE 94 00 00 00         LEA EDI,[ESI + 0x94]
0074A378  57                        PUSH EDI
0074A379  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074A37F  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
0074A382  85 C0                     TEST EAX,EAX
0074A384  74 06                     JZ 0x0074a38c
0074A386  8B 08                     MOV ECX,dword ptr [EAX]
0074A388  50                        PUSH EAX
0074A389  FF 51 04                  CALL dword ptr [ECX + 0x4]
LAB_0074a38c:
0074A38C  8B 76 6C                  MOV ESI,dword ptr [ESI + 0x6c]
0074A38F  57                        PUSH EDI
0074A390  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A396  8B C6                     MOV EAX,ESI
0074A398  5F                        POP EDI
0074A399  5E                        POP ESI
0074A39A  C3                        RET
