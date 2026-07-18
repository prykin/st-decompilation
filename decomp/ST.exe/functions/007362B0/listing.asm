FUN_007362b0:
007362B0  55                        PUSH EBP
007362B1  8B EC                     MOV EBP,ESP
007362B3  83 EC 0C                  SUB ESP,0xc
007362B6  53                        PUSH EBX
007362B7  56                        PUSH ESI
007362B8  57                        PUSH EDI
007362B9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007362BC  83 E0 01                  AND EAX,0x1
007362BF  85 C0                     TEST EAX,EAX
007362C1  74 0A                     JZ 0x007362cd
007362C3  DB 2D 50 16 7F 00         FLD extended double ptr [0x007f1650]
007362C9  DB 5D F4                  FISTP dword ptr [EBP + -0xc]
007362CC  9B                        WAIT
LAB_007362cd:
007362CD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007362D0  83 E1 08                  AND ECX,0x8
007362D3  85 C9                     TEST ECX,ECX
007362D5  74 10                     JZ 0x007362e7
007362D7  9B DF E0                  FSTSW AX
007362DA  DB 2D 50 16 7F 00         FLD extended double ptr [0x007f1650]
007362E0  DD 5D F8                  FSTP double ptr [EBP + -0x8]
007362E3  9B                        WAIT
007362E4  9B DF E0                  FSTSW AX
LAB_007362e7:
007362E7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007362EA  83 E2 10                  AND EDX,0x10
007362ED  85 D2                     TEST EDX,EDX
007362EF  74 0A                     JZ 0x007362fb
007362F1  DB 2D 5C 16 7F 00         FLD extended double ptr [0x007f165c]
007362F7  DD 5D F8                  FSTP double ptr [EBP + -0x8]
007362FA  9B                        WAIT
LAB_007362fb:
007362FB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007362FE  83 E0 04                  AND EAX,0x4
00736301  85 C0                     TEST EAX,EAX
00736303  74 09                     JZ 0x0073630e
00736305  D9 EE                     FLDZ
00736307  D9 E8                     FLD1
00736309  DE F1                     FDIVRP
0073630B  DD D8                     FSTP ST0
0073630D  9B                        WAIT
LAB_0073630e:
0073630E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00736311  83 E1 20                  AND ECX,0x20
00736314  85 C9                     TEST ECX,ECX
00736316  74 06                     JZ 0x0073631e
00736318  D9 EB                     FLDPI
0073631A  DD 5D F8                  FSTP double ptr [EBP + -0x8]
0073631D  9B                        WAIT
LAB_0073631e:
0073631E  5F                        POP EDI
0073631F  5E                        POP ESI
00736320  5B                        POP EBX
00736321  8B E5                     MOV ESP,EBP
00736323  5D                        POP EBP
00736324  C3                        RET
