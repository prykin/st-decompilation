FUN_00735020:
00735020  55                        PUSH EBP
00735021  8B EC                     MOV EBP,ESP
00735023  51                        PUSH ECX
00735024  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735027  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0073502A  51                        PUSH ECX
0073502B  8B 10                     MOV EDX,dword ptr [EAX]
0073502D  52                        PUSH EDX
0073502E  E8 5D 75 00 00            CALL 0x0073c590
00735033  83 C4 08                  ADD ESP,0x8
00735036  A3 F8 71 85 00            MOV [0x008571f8],EAX
0073503B  A1 F8 71 85 00            MOV EAX,[0x008571f8]
00735040  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00735043  83 E9 01                  SUB ECX,0x1
00735046  89 0D 00 72 85 00         MOV dword ptr [0x00857200],ECX
0073504C  8B 15 F8 71 85 00         MOV EDX,dword ptr [0x008571f8]
00735052  33 C0                     XOR EAX,EAX
00735054  83 3A 2D                  CMP dword ptr [EDX],0x2d
00735057  0F 94 C0                  SETZ AL
0073505A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073505D  03 C8                     ADD ECX,EAX
0073505F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00735062  8B 15 F8 71 85 00         MOV EDX,dword ptr [0x008571f8]
00735068  52                        PUSH EDX
00735069  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073506C  50                        PUSH EAX
0073506D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00735070  51                        PUSH ECX
00735071  E8 2A B5 00 00            CALL 0x007405a0
00735076  83 C4 0C                  ADD ESP,0xc
00735079  8B 15 F8 71 85 00         MOV EDX,dword ptr [0x008571f8]
0073507F  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00735082  83 E8 01                  SUB EAX,0x1
00735085  33 C9                     XOR ECX,ECX
00735087  39 05 00 72 85 00         CMP dword ptr [0x00857200],EAX
0073508D  0F 9C C1                  SETL CL
00735090  88 0D 04 72 85 00         MOV byte ptr [0x00857204],CL
00735096  8B 15 F8 71 85 00         MOV EDX,dword ptr [0x008571f8]
0073509C  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0073509F  83 E8 01                  SUB EAX,0x1
007350A2  A3 00 72 85 00            MOV [0x00857200],EAX
007350A7  83 3D 00 72 85 00 FC      CMP dword ptr [0x00857200],-0x4
007350AE  7C 0B                     JL 0x007350bb
007350B0  8B 0D 00 72 85 00         MOV ECX,dword ptr [0x00857200]
007350B6  3B 4D 10                  CMP ECX,dword ptr [EBP + 0x10]
007350B9  7C 1A                     JL 0x007350d5
LAB_007350bb:
007350BB  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
007350BE  52                        PUSH EDX
007350BF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007350C2  50                        PUSH EAX
007350C3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007350C6  51                        PUSH ECX
007350C7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007350CA  52                        PUSH EDX
007350CB  E8 50 00 00 00            CALL 0x00735120
007350D0  83 C4 10                  ADD ESP,0x10
007350D3  EB 3B                     JMP 0x00735110
LAB_007350d5:
007350D5  0F BE 05 04 72 85 00      MOVSX EAX,byte ptr [0x00857204]
007350DC  85 C0                     TEST EAX,EAX
007350DE  74 1C                     JZ 0x007350fc
LAB_007350e0:
007350E0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007350E3  0F BE 11                  MOVSX EDX,byte ptr [ECX]
007350E6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007350E9  83 C0 01                  ADD EAX,0x1
007350EC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007350EF  85 D2                     TEST EDX,EDX
007350F1  74 02                     JZ 0x007350f5
007350F3  EB EB                     JMP 0x007350e0
LAB_007350f5:
007350F5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007350F8  C6 41 FE 00               MOV byte ptr [ECX + -0x2],0x0
LAB_007350fc:
007350FC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007350FF  52                        PUSH EDX
00735100  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00735103  50                        PUSH EAX
00735104  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735107  51                        PUSH ECX
00735108  E8 53 00 00 00            CALL 0x00735160
0073510D  83 C4 0C                  ADD ESP,0xc
LAB_00735110:
00735110  8B E5                     MOV ESP,EBP
00735112  5D                        POP EBP
00735113  C3                        RET
