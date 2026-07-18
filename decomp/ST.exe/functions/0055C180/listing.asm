FUN_0055c180:
0055C180  56                        PUSH ESI
0055C181  8B F1                     MOV ESI,ECX
0055C183  57                        PUSH EDI
0055C184  6A 09                     PUSH 0x9
0055C186  C7 86 B8 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x6b8],0x0
0055C190  8B 0D D5 7D 80 00         MOV ECX,dword ptr [0x00807dd5]
0055C196  A1 D1 7D 80 00            MOV EAX,[0x00807dd1]
0055C19B  68 F0 D6 7C 00            PUSH 0x7cd6f0
0055C1A0  C1 E9 10                  SHR ECX,0x10
0055C1A3  8B D0                     MOV EDX,EAX
0055C1A5  25 00 00 FF FF            AND EAX,0xffff0000
0055C1AA  C1 E1 10                  SHL ECX,0x10
0055C1AD  C1 EA 10                  SHR EDX,0x10
0055C1B0  2D 00 00 DD D0            SUB EAX,0xd0dd0000
0055C1B5  0B CA                     OR ECX,EDX
0055C1B7  F7 D8                     NEG EAX
0055C1B9  1B C0                     SBB EAX,EAX
0055C1BB  68 A1 7D 80 00            PUSH 0x807da1
0055C1C0  83 E0 10                  AND EAX,0x10
0055C1C3  51                        PUSH ECX
0055C1C4  05 44 53 53 45            ADD EAX,0x45535344
0055C1C9  8B CE                     MOV ECX,ESI
0055C1CB  50                        PUSH EAX
0055C1CC  FF 15 34 C0 85 00         CALL dword ptr [0x0085c034]
0055C1D2  BF 06 84 80 00            MOV EDI,0x808406
0055C1D7  83 C9 FF                  OR ECX,0xffffffff
0055C1DA  33 C0                     XOR EAX,EAX
0055C1DC  F2 AE                     SCASB.REPNE ES:EDI
0055C1DE  F7 D1                     NOT ECX
0055C1E0  49                        DEC ECX
0055C1E1  74 29                     JZ 0x0055c20c
0055C1E3  68 06 84 80 00            PUSH 0x808406
0055C1E8  8B CE                     MOV ECX,ESI
0055C1EA  FF 15 38 C0 85 00         CALL dword ptr [0x0085c038]
0055C1F0  85 C0                     TEST EAX,EAX
0055C1F2  75 11                     JNZ 0x0055c205
0055C1F4  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
0055C1FA  50                        PUSH EAX
0055C1FB  8B CE                     MOV ECX,ESI
0055C1FD  E8 0A 9C EA FF            CALL 0x00405e0c
0055C202  5F                        POP EDI
0055C203  5E                        POP ESI
0055C204  C3                        RET
LAB_0055c205:
0055C205  C6 46 08 01               MOV byte ptr [ESI + 0x8],0x1
0055C209  5F                        POP EDI
0055C20A  5E                        POP ESI
0055C20B  C3                        RET
LAB_0055c20c:
0055C20C  8B CE                     MOV ECX,ESI
0055C20E  FF 15 10 C0 85 00         CALL dword ptr [0x0085c010]
0055C214  8B 06                     MOV EAX,dword ptr [ESI]
0055C216  6A 00                     PUSH 0x0
0055C218  6A 00                     PUSH 0x0
0055C21A  6A 64                     PUSH 0x64
0055C21C  6A 01                     PUSH 0x1
0055C21E  8B CE                     MOV ECX,ESI
0055C220  FF 50 3C                  CALL dword ptr [EAX + 0x3c]
0055C223  5F                        POP EDI
0055C224  5E                        POP ESI
0055C225  C3                        RET
