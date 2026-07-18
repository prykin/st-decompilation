STAllPlayersC::ReplaceObject:
004354E0  55                        PUSH EBP
004354E1  8B EC                     MOV EBP,ESP
004354E3  83 EC 60                  SUB ESP,0x60
004354E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004354EB  53                        PUSH EBX
004354EC  56                        PUSH ESI
004354ED  57                        PUSH EDI
004354EE  8D 55 A4                  LEA EDX,[EBP + -0x5c]
004354F1  8D 4D A0                  LEA ECX,[EBP + -0x60]
004354F4  6A 00                     PUSH 0x0
004354F6  52                        PUSH EDX
004354F7  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
004354FA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00435500  E8 EB 82 2F 00            CALL 0x0072d7f0
00435505  8B F0                     MOV ESI,EAX
00435507  83 C4 08                  ADD ESP,0x8
0043550A  85 F6                     TEST ESI,ESI
0043550C  0F 85 B4 01 00 00         JNZ 0x004356c6
00435512  33 C9                     XOR ECX,ECX
00435514  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00435517:
00435517  33 C0                     XOR EAX,EAX
00435519  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043551E  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00435521  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
00435524  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
00435527  C1 E2 04                  SHL EDX,0x4
0043552A  03 D0                     ADD EDX,EAX
0043552C  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0043552F  81 B8 27 50 7F 00 9A 01 00 00  CMP dword ptr [EAX + 0x7f5027],0x19a
00435539  75 4A                     JNZ 0x00435585
0043553B  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0043553F  39 88 2B 50 7F 00         CMP dword ptr [EAX + 0x7f502b],ECX
00435545  75 3E                     JNZ 0x00435585
00435547  8B B8 31 50 7F 00         MOV EDI,dword ptr [EAX + 0x7f5031]
0043554D  33 F6                     XOR ESI,ESI
0043554F  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
00435552  85 DB                     TEST EBX,EBX
00435554  7E 2F                     JLE 0x00435585
LAB_00435556:
00435556  8D 55 FC                  LEA EDX,[EBP + -0x4]
00435559  8B CF                     MOV ECX,EDI
0043555B  52                        PUSH EDX
0043555C  8B D6                     MOV EDX,ESI
0043555E  E8 0D 77 27 00            CALL 0x006acc70
00435563  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
00435567  66 39 45 FC               CMP word ptr [EBP + -0x4],AX
0043556B  74 07                     JZ 0x00435574
0043556D  46                        INC ESI
0043556E  3B F3                     CMP ESI,EBX
00435570  7C E4                     JL 0x00435556
00435572  EB 11                     JMP 0x00435585
LAB_00435574:
00435574  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00435577  8D 55 FC                  LEA EDX,[EBP + -0x4]
0043557A  52                        PUSH EDX
0043557B  56                        PUSH ESI
0043557C  57                        PUSH EDI
0043557D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00435580  E8 BB 8B 27 00            CALL 0x006ae140
LAB_00435585:
00435585  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00435588  83 C1 10                  ADD ECX,0x10
0043558B  81 F9 90 00 00 00         CMP ECX,0x90
00435591  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00435594  7E 81                     JLE 0x00435517
00435596  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0043559A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043559D  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004355A0  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004355A3  C1 E1 04                  SHL ECX,0x4
004355A6  03 C8                     ADD ECX,EAX
004355A8  8B 0C 4D 16 58 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f5816]
004355AF  85 C9                     TEST ECX,ECX
004355B1  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004355B4  74 67                     JZ 0x0043561d
004355B6  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004355B9  85 C0                     TEST EAX,EAX
004355BB  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004355BE  76 5D                     JBE 0x0043561d
004355C0  33 DB                     XOR EBX,EBX
004355C2  85 C0                     TEST EAX,EAX
004355C4  7E 57                     JLE 0x0043561d
004355C6  EB 03                     JMP 0x004355cb
LAB_004355c8:
004355C8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_004355cb:
004355CB  8D 55 E4                  LEA EDX,[EBP + -0x1c]
004355CE  52                        PUSH EDX
004355CF  8B D3                     MOV EDX,EBX
004355D1  E8 9A 76 27 00            CALL 0x006acc70
004355D6  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004355D9  85 C9                     TEST ECX,ECX
004355DB  74 38                     JZ 0x00435615
004355DD  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
004355E0  33 F6                     XOR ESI,ESI
004355E2  85 FF                     TEST EDI,EDI
004355E4  7E 2F                     JLE 0x00435615
004355E6  EB 03                     JMP 0x004355eb
LAB_004355e8:
004355E8  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
LAB_004355eb:
004355EB  8D 45 FC                  LEA EAX,[EBP + -0x4]
004355EE  8B D6                     MOV EDX,ESI
004355F0  50                        PUSH EAX
004355F1  E8 7A 76 27 00            CALL 0x006acc70
004355F6  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
004355FA  66 39 4D FC               CMP word ptr [EBP + -0x4],CX
004355FE  74 07                     JZ 0x00435607
00435600  46                        INC ESI
00435601  3B F7                     CMP ESI,EDI
00435603  7C E3                     JL 0x004355e8
00435605  EB 0E                     JMP 0x00435615
LAB_00435607:
00435607  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0043560A  8D 55 10                  LEA EDX,[EBP + 0x10]
0043560D  52                        PUSH EDX
0043560E  56                        PUSH ESI
0043560F  50                        PUSH EAX
00435610  E8 2B 8B 27 00            CALL 0x006ae140
LAB_00435615:
00435615  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00435618  43                        INC EBX
00435619  3B D8                     CMP EBX,EAX
0043561B  7C AB                     JL 0x004355c8
LAB_0043561d:
0043561D  B8 25 4E 7F 00            MOV EAX,0x7f4e25
00435622  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00435625:
00435625  8B 38                     MOV EDI,dword ptr [EAX]
00435627  33 F6                     XOR ESI,ESI
00435629  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
0043562C  85 DB                     TEST EBX,EBX
0043562E  7E 2D                     JLE 0x0043565d
LAB_00435630:
00435630  8D 4D F8                  LEA ECX,[EBP + -0x8]
00435633  8B D6                     MOV EDX,ESI
00435635  51                        PUSH ECX
00435636  8B CF                     MOV ECX,EDI
00435638  E8 33 76 27 00            CALL 0x006acc70
0043563D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00435640  85 C9                     TEST ECX,ECX
00435642  74 11                     JZ 0x00435655
00435644  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00435647  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043564A  52                        PUSH EDX
0043564B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0043564E  50                        PUSH EAX
0043564F  52                        PUSH EDX
00435650  E8 CB E4 FC FF            CALL 0x00403b20
LAB_00435655:
00435655  46                        INC ESI
00435656  3B F3                     CMP ESI,EBX
00435658  7C D6                     JL 0x00435630
0043565A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_0043565d:
0043565D  05 62 0A 00 00            ADD EAX,0xa62
00435662  3D 35 A1 7F 00            CMP EAX,0x7fa135
00435667  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0043566A  7C B9                     JL 0x00435625
0043566C  BB 29 4E 7F 00            MOV EBX,0x7f4e29
LAB_00435671:
00435671  8B 0B                     MOV ECX,dword ptr [EBX]
00435673  85 C9                     TEST ECX,ECX
00435675  74 30                     JZ 0x004356a7
00435677  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0043567A  85 C0                     TEST EAX,EAX
0043567C  76 29                     JBE 0x004356a7
0043567E  8B 49 1C                  MOV ECX,dword ptr [ECX + 0x1c]
00435681  7E 24                     JLE 0x004356a7
00435683  8B F1                     MOV ESI,ECX
00435685  8B F8                     MOV EDI,EAX
LAB_00435687:
00435687  8B 0E                     MOV ECX,dword ptr [ESI]
00435689  85 C9                     TEST ECX,ECX
0043568B  74 14                     JZ 0x004356a1
0043568D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00435690  8B 01                     MOV EAX,dword ptr [ECX]
00435692  52                        PUSH EDX
00435693  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00435696  52                        PUSH EDX
00435697  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0043569A  52                        PUSH EDX
0043569B  FF 90 8C 00 00 00         CALL dword ptr [EAX + 0x8c]
LAB_004356a1:
004356A1  83 C6 04                  ADD ESI,0x4
004356A4  4F                        DEC EDI
004356A5  75 E0                     JNZ 0x00435687
LAB_004356a7:
004356A7  81 C3 62 0A 00 00         ADD EBX,0xa62
004356AD  81 FB 39 A1 7F 00         CMP EBX,0x7fa139
004356B3  7C BC                     JL 0x00435671
004356B5  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
004356B8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004356BD  5F                        POP EDI
004356BE  5E                        POP ESI
004356BF  5B                        POP EBX
004356C0  8B E5                     MOV ESP,EBP
004356C2  5D                        POP EBP
004356C3  C2 0C 00                  RET 0xc
LAB_004356c6:
004356C6  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
004356C9  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
004356CF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004356D5  74 36                     JZ 0x0043570d
004356D7  68 80 73 7A 00            PUSH 0x7a7380
004356DC  68 CC 4C 7A 00            PUSH 0x7a4ccc
004356E1  56                        PUSH ESI
004356E2  6A 00                     PUSH 0x0
004356E4  68 7C 11 00 00            PUSH 0x117c
004356E9  68 04 60 7A 00            PUSH 0x7a6004
004356EE  E8 DD 7D 27 00            CALL 0x006ad4d0
004356F3  83 C4 18                  ADD ESP,0x18
004356F6  85 C0                     TEST EAX,EAX
004356F8  74 01                     JZ 0x004356fb
004356FA  CC                        INT3
LAB_004356fb:
004356FB  68 7D 11 00 00            PUSH 0x117d
00435700  68 04 60 7A 00            PUSH 0x7a6004
00435705  6A 00                     PUSH 0x0
00435707  56                        PUSH ESI
00435708  E8 33 07 27 00            CALL 0x006a5e40
LAB_0043570d:
0043570D  5F                        POP EDI
0043570E  5E                        POP ESI
0043570F  5B                        POP EBX
00435710  8B E5                     MOV ESP,EBP
00435712  5D                        POP EBP
00435713  C2 0C 00                  RET 0xc
