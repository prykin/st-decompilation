FUN_00499750:
00499750  55                        PUSH EBP
00499751  8B EC                     MOV EBP,ESP
00499753  83 EC 54                  SUB ESP,0x54
00499756  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0049975B  53                        PUSH EBX
0049975C  56                        PUSH ESI
0049975D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00499760  57                        PUSH EDI
00499761  8D 55 B0                  LEA EDX,[EBP + -0x50]
00499764  8D 4D AC                  LEA ECX,[EBP + -0x54]
00499767  6A 00                     PUSH 0x0
00499769  52                        PUSH EDX
0049976A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0049976D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00499773  E8 78 40 29 00            CALL 0x0072d7f0
00499778  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0049977B  8B F8                     MOV EDI,EAX
0049977D  83 C4 08                  ADD ESP,0x8
00499780  85 FF                     TEST EDI,EDI
00499782  0F 85 62 01 00 00         JNZ 0x004998ea
00499788  8B 86 12 02 00 00         MOV EAX,dword ptr [ESI + 0x212]
0049978E  85 C0                     TEST EAX,EAX
00499790  75 1A                     JNZ 0x004997ac
00499792  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00499797  68 D7 04 00 00            PUSH 0x4d7
0049979C  68 3C BE 7A 00            PUSH 0x7abe3c
004997A1  50                        PUSH EAX
004997A2  68 09 00 FE AF            PUSH 0xaffe0009
004997A7  E8 94 C6 20 00            CALL 0x006a5e40
LAB_004997ac:
004997AC  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004997AF  33 FF                     XOR EDI,EDI
004997B1  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
004997B4  85 C0                     TEST EAX,EAX
004997B6  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004997B9  7E 6A                     JLE 0x00499825
LAB_004997bb:
004997BB  8D 4D F8                  LEA ECX,[EBP + -0x8]
004997BE  8B D7                     MOV EDX,EDI
004997C0  51                        PUSH ECX
004997C1  8B CB                     MOV ECX,EBX
004997C3  E8 A8 34 21 00            CALL 0x006acc70
004997C8  8B 8E 0E 02 00 00         MOV ECX,dword ptr [ESI + 0x20e]
004997CE  8D 55 FC                  LEA EDX,[EBP + -0x4]
004997D1  52                        PUSH EDX
004997D2  0F BF 55 FA               MOVSX EDX,word ptr [EBP + -0x6]
004997D6  E8 95 34 21 00            CALL 0x006acc70
004997DB  B8 FF FF 00 00            MOV EAX,0xffff
004997E0  66 39 45 FE               CMP word ptr [EBP + -0x2],AX
004997E4  74 37                     JZ 0x0049981d
004997E6  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
004997EA  8B 96 0E 02 00 00         MOV EDX,dword ptr [ESI + 0x20e]
004997F0  66 89 45 FE               MOV word ptr [EBP + -0x2],AX
004997F4  8D 45 FC                  LEA EAX,[EBP + -0x4]
004997F7  50                        PUSH EAX
004997F8  51                        PUSH ECX
004997F9  52                        PUSH EDX
004997FA  E8 41 49 21 00            CALL 0x006ae140
004997FF  8B 86 12 02 00 00         MOV EAX,dword ptr [ESI + 0x212]
00499805  8B 8E 1E 02 00 00         MOV ECX,dword ptr [ESI + 0x21e]
0049980B  48                        DEC EAX
0049980C  89 86 12 02 00 00         MOV dword ptr [ESI + 0x212],EAX
00499812  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
00499816  C7 04 C1 FF FF FF FF      MOV dword ptr [ECX + EAX*0x8],0xffffffff
LAB_0049981d:
0049981D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00499820  47                        INC EDI
00499821  3B F8                     CMP EDI,EAX
00499823  7C 96                     JL 0x004997bb
LAB_00499825:
00499825  8B 86 12 02 00 00         MOV EAX,dword ptr [ESI + 0x212]
0049982B  85 C0                     TEST EAX,EAX
0049982D  75 3D                     JNZ 0x0049986c
0049982F  8B 96 0E 02 00 00         MOV EDX,dword ptr [ESI + 0x20e]
00499835  52                        PUSH EDX
00499836  E8 D5 48 21 00            CALL 0x006ae110
0049983B  8D 86 1E 02 00 00         LEA EAX,[ESI + 0x21e]
00499841  C7 86 0E 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x20e],0x0
0049984B  50                        PUSH EAX
0049984C  E8 0F 18 21 00            CALL 0x006ab060
00499851  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00499857  68 E5 04 00 00            PUSH 0x4e5
0049985C  68 3C BE 7A 00            PUSH 0x7abe3c
00499861  51                        PUSH ECX
00499862  68 09 00 FE AF            PUSH 0xaffe0009
00499867  E8 D4 C5 20 00            CALL 0x006a5e40
LAB_0049986c:
0049986C  8B 86 1A 02 00 00         MOV EAX,dword ptr [ESI + 0x21a]
00499872  83 CA FF                  OR EDX,0xffffffff
00499875  33 C9                     XOR ECX,ECX
00499877  85 C0                     TEST EAX,EAX
00499879  7E 58                     JLE 0x004998d3
0049987B  8B 86 1E 02 00 00         MOV EAX,dword ptr [ESI + 0x21e]
LAB_00499881:
00499881  83 3C C8 FF               CMP dword ptr [EAX + ECX*0x8],-0x1
00499885  74 41                     JZ 0x004998c8
00499887  83 FA FF                  CMP EDX,-0x1
0049988A  75 1B                     JNZ 0x004998a7
0049988C  C7 04 C8 00 00 00 00      MOV dword ptr [EAX + ECX*0x8],0x0
00499893  8B 86 1E 02 00 00         MOV EAX,dword ptr [ESI + 0x21e]
00499899  8B 54 C8 04               MOV EDX,dword ptr [EAX + ECX*0x8 + 0x4]
0049989D  89 96 16 02 00 00         MOV dword ptr [ESI + 0x216],EDX
004998A3  33 D2                     XOR EDX,EDX
004998A5  EB 21                     JMP 0x004998c8
LAB_004998a7:
004998A7  8B BE 16 02 00 00         MOV EDI,dword ptr [ESI + 0x216]
004998AD  89 3C C8                  MOV dword ptr [EAX + ECX*0x8],EDI
004998B0  8B 86 1E 02 00 00         MOV EAX,dword ptr [ESI + 0x21e]
004998B6  8B 9E 16 02 00 00         MOV EBX,dword ptr [ESI + 0x216]
004998BC  8B 7C C8 04               MOV EDI,dword ptr [EAX + ECX*0x8 + 0x4]
004998C0  03 DF                     ADD EBX,EDI
004998C2  89 9E 16 02 00 00         MOV dword ptr [ESI + 0x216],EBX
LAB_004998c8:
004998C8  8B BE 1A 02 00 00         MOV EDI,dword ptr [ESI + 0x21a]
004998CE  41                        INC ECX
004998CF  3B CF                     CMP ECX,EDI
004998D1  7C AE                     JL 0x00499881
LAB_004998d3:
004998D3  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
004998D6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_004998db:
004998DB  8B 86 12 02 00 00         MOV EAX,dword ptr [ESI + 0x212]
004998E1  5F                        POP EDI
004998E2  5E                        POP ESI
004998E3  5B                        POP EBX
004998E4  8B E5                     MOV ESP,EBP
004998E6  5D                        POP EBP
004998E7  C2 04 00                  RET 0x4
LAB_004998ea:
004998EA  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004998ED  81 FF 09 00 FE AF         CMP EDI,0xaffe0009
004998F3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004998F9  74 E0                     JZ 0x004998db
004998FB  68 9C BE 7A 00            PUSH 0x7abe9c
00499900  68 CC 4C 7A 00            PUSH 0x7a4ccc
00499905  57                        PUSH EDI
00499906  6A 00                     PUSH 0x0
00499908  68 F3 04 00 00            PUSH 0x4f3
0049990D  68 3C BE 7A 00            PUSH 0x7abe3c
00499912  E8 B9 3B 21 00            CALL 0x006ad4d0
00499917  83 C4 18                  ADD ESP,0x18
0049991A  85 C0                     TEST EAX,EAX
0049991C  74 01                     JZ 0x0049991f
0049991E  CC                        INT3
LAB_0049991f:
0049991F  68 F4 04 00 00            PUSH 0x4f4
00499924  68 3C BE 7A 00            PUSH 0x7abe3c
00499929  6A 00                     PUSH 0x0
0049992B  57                        PUSH EDI
0049992C  E8 0F C5 20 00            CALL 0x006a5e40
00499931  5F                        POP EDI
00499932  5E                        POP ESI
00499933  83 C8 FF                  OR EAX,0xffffffff
00499936  5B                        POP EBX
00499937  8B E5                     MOV ESP,EBP
00499939  5D                        POP EBP
0049993A  C2 04 00                  RET 0x4
