FUN_0074c501:
0074C501  53                        PUSH EBX
0074C502  56                        PUSH ESI
0074C503  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
0074C507  57                        PUSH EDI
0074C508  8B BE CC 00 00 00         MOV EDI,dword ptr [ESI + 0xcc]
0074C50E  83 C7 5C                  ADD EDI,0x5c
0074C511  57                        PUSH EDI
0074C512  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074C518  83 7E 0C 00               CMP dword ptr [ESI + 0xc],0x0
0074C51C  74 41                     JZ 0x0074c55f
0074C51E  8B 86 CC 00 00 00         MOV EAX,dword ptr [ESI + 0xcc]
0074C524  8B 80 90 00 00 00         MOV EAX,dword ptr [EAX + 0x90]
0074C52A  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
0074C52E  74 2F                     JZ 0x0074c55f
0074C530  56                        PUSH ESI
0074C531  E8 10 C4 FF FF            CALL 0x00748946
0074C536  8B D8                     MOV EBX,EAX
0074C538  85 DB                     TEST EBX,EBX
0074C53A  7D 0B                     JGE 0x0074c547
0074C53C  57                        PUSH EDI
0074C53D  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074C543  8B C3                     MOV EAX,EBX
0074C545  EB 24                     JMP 0x0074c56b
LAB_0074c547:
0074C547  8B 8E CC 00 00 00         MOV ECX,dword ptr [ESI + 0xcc]
0074C54D  8B 01                     MOV EAX,dword ptr [ECX]
0074C54F  FF 50 5C                  CALL dword ptr [EAX + 0x5c]
0074C552  57                        PUSH EDI
0074C553  8B F0                     MOV ESI,EAX
0074C555  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074C55B  8B C6                     MOV EAX,ESI
0074C55D  EB 0C                     JMP 0x0074c56b
LAB_0074c55f:
0074C55F  57                        PUSH EDI
0074C560  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074C566  B8 09 02 04 80            MOV EAX,0x80040209
LAB_0074c56b:
0074C56B  5F                        POP EDI
0074C56C  5E                        POP ESI
0074C56D  5B                        POP EBX
0074C56E  C2 04 00                  RET 0x4
