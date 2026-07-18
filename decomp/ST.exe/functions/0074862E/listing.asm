FUN_0074862e:
0074862E  83 7C 24 08 00            CMP dword ptr [ESP + 0x8],0x0
00748633  53                        PUSH EBX
00748634  56                        PUSH ESI
00748635  57                        PUSH EDI
00748636  75 07                     JNZ 0x0074863f
00748638  B8 03 40 00 80            MOV EAX,0x80004003
0074863D  EB 46                     JMP 0x00748685
LAB_0074863f:
0074863F  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
00748643  8B 7E D0                  MOV EDI,dword ptr [ESI + -0x30]
00748646  57                        PUSH EDI
00748647  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074864D  83 C6 04                  ADD ESI,0x4
00748650  83 3E 00                  CMP dword ptr [ESI],0x0
00748653  75 17                     JNZ 0x0074866c
00748655  56                        PUSH ESI
00748656  E8 35 E5 FF FF            CALL 0x00746b90
0074865B  8B D8                     MOV EBX,EAX
0074865D  85 DB                     TEST EBX,EBX
0074865F  7D 0B                     JGE 0x0074866c
00748661  57                        PUSH EDI
00748662  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00748668  8B C3                     MOV EAX,EBX
0074866A  EB 19                     JMP 0x00748685
LAB_0074866c:
0074866C  8B 4C 24 14               MOV ECX,dword ptr [ESP + 0x14]
00748670  8B 06                     MOV EAX,dword ptr [ESI]
00748672  89 01                     MOV dword ptr [ECX],EAX
00748674  8B 36                     MOV ESI,dword ptr [ESI]
00748676  56                        PUSH ESI
00748677  8B 06                     MOV EAX,dword ptr [ESI]
00748679  FF 50 04                  CALL dword ptr [EAX + 0x4]
0074867C  57                        PUSH EDI
0074867D  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00748683  33 C0                     XOR EAX,EAX
LAB_00748685:
00748685  5F                        POP EDI
00748686  5E                        POP ESI
00748687  5B                        POP EBX
00748688  C2 08 00                  RET 0x8
