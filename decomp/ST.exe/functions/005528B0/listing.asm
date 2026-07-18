FUN_005528b0:
005528B0  55                        PUSH EBP
005528B1  8B EC                     MOV EBP,ESP
005528B3  83 EC 48                  SUB ESP,0x48
005528B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005528BB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005528BE  56                        PUSH ESI
005528BF  8D 55 BC                  LEA EDX,[EBP + -0x44]
005528C2  8D 4D B8                  LEA ECX,[EBP + -0x48]
005528C5  6A 00                     PUSH 0x0
005528C7  52                        PUSH EDX
005528C8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005528CB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005528D1  E8 1A AF 1D 00            CALL 0x0072d7f0
005528D6  8B F0                     MOV ESI,EAX
005528D8  83 C4 08                  ADD ESP,0x8
005528DB  85 F6                     TEST ESI,ESI
005528DD  0F 85 BC 00 00 00         JNZ 0x0055299f
005528E3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005528E6  6A 77                     PUSH 0x77
005528E8  68 C9 00 00 00            PUSH 0xc9
005528ED  68 C1 36 00 00            PUSH 0x36c1
005528F2  6A 0C                     PUSH 0xc
005528F4  68 C6 00 00 00            PUSH 0xc6
005528F9  6A 02                     PUSH 0x2
005528FB  6A 31                     PUSH 0x31
005528FD  50                        PUSH EAX
005528FE  68 00 88 7C 00            PUSH 0x7c8800
00552903  89 35 48 2A 80 00         MOV dword ptr [0x00802a48],ESI
00552909  E8 6E 2E EB FF            CALL 0x0040577c
0055290E  83 C4 08                  ADD ESP,0x8
00552911  8B CE                     MOV ECX,ESI
00552913  50                        PUSH EAX
00552914  E8 E7 0E EB FF            CALL 0x00403800
00552919  A1 94 67 80 00            MOV EAX,[0x00806794]
0055291E  6A 00                     PUSH 0x0
00552920  6A 00                     PUSH 0x0
00552922  6A 01                     PUSH 0x1
00552924  6A 00                     PUSH 0x0
00552926  6A FF                     PUSH -0x1
00552928  68 A0 20 7C 00            PUSH 0x7c20a0
0055292D  6A 0B                     PUSH 0xb
0055292F  50                        PUSH EAX
00552930  E8 BB 71 1B 00            CALL 0x00709af0
00552935  6A 00                     PUSH 0x0
00552937  6A 00                     PUSH 0x0
00552939  6A 01                     PUSH 0x1
0055293B  6A 00                     PUSH 0x0
0055293D  89 86 EB 03 00 00         MOV dword ptr [ESI + 0x3eb],EAX
00552943  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
00552949  6A FF                     PUSH -0x1
0055294B  68 C8 38 7C 00            PUSH 0x7c38c8
00552950  6A 0B                     PUSH 0xb
00552952  51                        PUSH ECX
00552953  E8 98 71 1B 00            CALL 0x00709af0
00552958  83 C4 40                  ADD ESP,0x40
0055295B  89 86 EF 03 00 00         MOV dword ptr [ESI + 0x3ef],EAX
00552961  6A 00                     PUSH 0x0
00552963  6A 00                     PUSH 0x0
00552965  6A 01                     PUSH 0x1
00552967  6A 00                     PUSH 0x0
00552969  6A FF                     PUSH -0x1
0055296B  6A 00                     PUSH 0x0
0055296D  68 5C 20 7C 00            PUSH 0x7c205c
00552972  E8 05 2E EB FF            CALL 0x0040577c
00552977  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
0055297D  83 C4 08                  ADD ESP,0x8
00552980  50                        PUSH EAX
00552981  6A 0B                     PUSH 0xb
00552983  52                        PUSH EDX
00552984  E8 67 71 1B 00            CALL 0x00709af0
00552989  89 86 F3 03 00 00         MOV dword ptr [ESI + 0x3f3],EAX
0055298F  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00552992  83 C4 20                  ADD ESP,0x20
00552995  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0055299A  5E                        POP ESI
0055299B  8B E5                     MOV ESP,EBP
0055299D  5D                        POP EBP
0055299E  C3                        RET
LAB_0055299f:
0055299F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005529A2  68 E0 87 7C 00            PUSH 0x7c87e0
005529A7  68 CC 4C 7A 00            PUSH 0x7a4ccc
005529AC  56                        PUSH ESI
005529AD  6A 00                     PUSH 0x0
005529AF  6A 1D                     PUSH 0x1d
005529B1  68 B8 87 7C 00            PUSH 0x7c87b8
005529B6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005529BC  E8 0F AB 15 00            CALL 0x006ad4d0
005529C1  83 C4 18                  ADD ESP,0x18
005529C4  85 C0                     TEST EAX,EAX
005529C6  74 01                     JZ 0x005529c9
005529C8  CC                        INT3
LAB_005529c9:
005529C9  6A 1D                     PUSH 0x1d
005529CB  68 B8 87 7C 00            PUSH 0x7c87b8
005529D0  6A 00                     PUSH 0x0
005529D2  56                        PUSH ESI
005529D3  E8 68 34 15 00            CALL 0x006a5e40
005529D8  5E                        POP ESI
005529D9  8B E5                     MOV ESP,EBP
005529DB  5D                        POP EBP
005529DC  C3                        RET
