FUN_00756650:
00756650  55                        PUSH EBP
00756651  8B EC                     MOV EBP,ESP
00756653  56                        PUSH ESI
00756654  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00756657  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0075665A  3D CD 00 00 00            CMP EAX,0xcd
0075665F  74 07                     JZ 0x00756668
00756661  3D CE 00 00 00            CMP EAX,0xce
00756666  75 3F                     JNZ 0x007566a7
LAB_00756668:
00756668  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0075666B  85 C9                     TEST ECX,ECX
0075666D  75 38                     JNZ 0x007566a7
0075666F  8B 86 84 00 00 00         MOV EAX,dword ptr [ESI + 0x84]
00756675  8B 4E 6C                  MOV ECX,dword ptr [ESI + 0x6c]
00756678  3B C1                     CMP EAX,ECX
0075667A  73 18                     JNC 0x00756694
0075667C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00756682  68 82 01 00 00            PUSH 0x182
00756687  68 38 2D 7F 00            PUSH 0x7f2d38
0075668C  51                        PUSH ECX
0075668D  6A 42                     PUSH 0x42
0075668F  E8 AC F7 F4 FF            CALL 0x006a5e40
LAB_00756694:
00756694  8B 96 92 01 00 00         MOV EDX,dword ptr [ESI + 0x192]
0075669A  56                        PUSH ESI
0075669B  FF 52 04                  CALL dword ptr [EDX + 0x4]
0075669E  C7 46 0C D2 00 00 00      MOV dword ptr [ESI + 0xc],0xd2
007566A5  EB 2E                     JMP 0x007566d5
LAB_007566a7:
007566A7  3D CF 00 00 00            CMP EAX,0xcf
007566AC  75 09                     JNZ 0x007566b7
007566AE  C7 46 0C D2 00 00 00      MOV dword ptr [ESI + 0xc],0xd2
007566B5  EB 1E                     JMP 0x007566d5
LAB_007566b7:
007566B7  3D D2 00 00 00            CMP EAX,0xd2
007566BC  74 17                     JZ 0x007566d5
007566BE  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007566C3  68 8A 01 00 00            PUSH 0x18a
007566C8  68 38 2D 7F 00            PUSH 0x7f2d38
007566CD  50                        PUSH EAX
007566CE  6A 12                     PUSH 0x12
007566D0  E8 6B F7 F4 FF            CALL 0x006a5e40
LAB_007566d5:
007566D5  8B 86 A2 01 00 00         MOV EAX,dword ptr [ESI + 0x1a2]
007566DB  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
007566DE  85 C9                     TEST ECX,ECX
007566E0  75 14                     JNZ 0x007566f6
LAB_007566e2:
007566E2  56                        PUSH ESI
007566E3  FF 10                     CALL dword ptr [EAX]
007566E5  85 C0                     TEST EAX,EAX
007566E7  74 24                     JZ 0x0075670d
007566E9  8B 86 A2 01 00 00         MOV EAX,dword ptr [ESI + 0x1a2]
007566EF  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
007566F2  85 C9                     TEST ECX,ECX
007566F4  74 EC                     JZ 0x007566e2
LAB_007566f6:
007566F6  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
007566F9  56                        PUSH ESI
007566FA  FF 51 18                  CALL dword ptr [ECX + 0x18]
007566FD  56                        PUSH ESI
007566FE  E8 CD 36 00 00            CALL 0x00759dd0
00756703  B8 01 00 00 00            MOV EAX,0x1
00756708  5E                        POP ESI
00756709  5D                        POP EBP
0075670A  C2 04 00                  RET 0x4
LAB_0075670d:
0075670D  33 C0                     XOR EAX,EAX
0075670F  5E                        POP ESI
00756710  5D                        POP EBP
00756711  C2 04 00                  RET 0x4
