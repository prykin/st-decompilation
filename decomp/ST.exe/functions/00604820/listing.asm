FUN_00604820:
00604820  53                        PUSH EBX
00604821  8B D9                     MOV EBX,ECX
00604823  57                        PUSH EDI
00604824  33 FF                     XOR EDI,EDI
00604826  8B 83 69 02 00 00         MOV EAX,dword ptr [EBX + 0x269]
0060482C  85 C0                     TEST EAX,EAX
0060482E  7E 23                     JLE 0x00604853
00604830  56                        PUSH ESI
00604831  8D B3 19 02 00 00         LEA ESI,[EBX + 0x219]
LAB_00604837:
00604837  8B 0E                     MOV ECX,dword ptr [ESI]
00604839  85 C9                     TEST ECX,ECX
0060483B  74 07                     JZ 0x00604844
0060483D  6A 01                     PUSH 0x1
0060483F  E8 8C 10 E0 FF            CALL 0x004058d0
LAB_00604844:
00604844  8B 83 69 02 00 00         MOV EAX,dword ptr [EBX + 0x269]
0060484A  47                        INC EDI
0060484B  83 C6 04                  ADD ESI,0x4
0060484E  3B F8                     CMP EDI,EAX
00604850  7C E5                     JL 0x00604837
00604852  5E                        POP ESI
LAB_00604853:
00604853  5F                        POP EDI
00604854  5B                        POP EBX
00604855  C3                        RET
