FUN_00746620:
00746620  55                        PUSH EBP
00746621  8B EC                     MOV EBP,ESP
00746623  83 EC 08                  SUB ESP,0x8
00746626  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00746629  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0074662C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074662F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00746632:
00746632  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00746635  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00746638  83 E8 01                  SUB EAX,0x1
0074663B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0074663E  85 D2                     TEST EDX,EDX
00746640  74 15                     JZ 0x00746657
00746642  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00746645  0F BE 11                  MOVSX EDX,byte ptr [ECX]
00746648  85 D2                     TEST EDX,EDX
0074664A  74 0B                     JZ 0x00746657
0074664C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074664F  83 C0 01                  ADD EAX,0x1
00746652  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00746655  EB DB                     JMP 0x00746632
LAB_00746657:
00746657  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074665A  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0074665D  85 D2                     TEST EDX,EDX
0074665F  75 08                     JNZ 0x00746669
00746661  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00746664  2B 45 08                  SUB EAX,dword ptr [EBP + 0x8]
00746667  EB 03                     JMP 0x0074666c
LAB_00746669:
00746669  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_0074666c:
0074666C  8B E5                     MOV ESP,EBP
0074666E  5D                        POP EBP
0074666F  C3                        RET
