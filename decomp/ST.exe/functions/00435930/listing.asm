FUN_00435930:
00435930  55                        PUSH EBP
00435931  8B EC                     MOV EBP,ESP
00435933  83 EC 0C                  SUB ESP,0xc
00435936  53                        PUSH EBX
00435937  56                        PUSH ESI
00435938  57                        PUSH EDI
00435939  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0043593C  8B D9                     MOV EBX,ECX
0043593E  85 FF                     TEST EDI,EDI
00435940  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00435943  74 2B                     JZ 0x00435970
00435945  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00435948  83 F8 14                  CMP EAX,0x14
0043594B  74 1C                     JZ 0x00435969
0043594D  3D E8 03 00 00            CMP EAX,0x3e8
00435952  74 15                     JZ 0x00435969
00435954  3D E9 03 00 00            CMP EAX,0x3e9
00435959  74 0E                     JZ 0x00435969
0043595B  3D 72 01 00 00            CMP EAX,0x172
00435960  74 07                     JZ 0x00435969
00435962  3D A4 01 00 00            CMP EAX,0x1a4
00435967  75 07                     JNZ 0x00435970
LAB_00435969:
00435969  8B CF                     MOV ECX,EDI
0043596B  E8 5C DB FC FF            CALL 0x004034cc
LAB_00435970:
00435970  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00435976  33 C0                     XOR EAX,EAX
00435978  8A C2                     MOV AL,DL
0043597A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043597D  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
00435980  8D 34 48                  LEA ESI,[EAX + ECX*0x2]
00435983  C1 E6 04                  SHL ESI,0x4
00435986  03 F0                     ADD ESI,EAX
00435988  D1 E6                     SHL ESI,0x1
0043598A  8B 8E 23 50 7F 00         MOV ECX,dword ptr [ESI + 0x7f5023]
00435990  83 E9 00                  SUB ECX,0x0
00435993  0F 84 C7 00 00 00         JZ 0x00435a60
00435999  49                        DEC ECX
0043599A  74 2E                     JZ 0x004359ca
0043599C  68 A4 73 7A 00            PUSH 0x7a73a4
004359A1  68 CC 4C 7A 00            PUSH 0x7a4ccc
004359A6  6A 00                     PUSH 0x0
004359A8  6A 00                     PUSH 0x0
004359AA  68 EA 11 00 00            PUSH 0x11ea
004359AF  68 04 60 7A 00            PUSH 0x7a6004
004359B4  E8 17 7B 27 00            CALL 0x006ad4d0
004359B9  83 C4 18                  ADD ESP,0x18
004359BC  85 C0                     TEST EAX,EAX
004359BE  0F 84 A6 00 00 00         JZ 0x00435a6a
004359C4  CC                        INT3
LAB_004359ca:
004359CA  8B 8E D3 4F 7F 00         MOV ECX,dword ptr [ESI + 0x7f4fd3]
004359D0  85 C9                     TEST ECX,ECX
004359D2  0F 84 92 00 00 00         JZ 0x00435a6a
004359D8  81 F9 9A 01 00 00         CMP ECX,0x19a
004359DE  75 42                     JNZ 0x00435a22
004359E0  39 86 D7 4F 7F 00         CMP dword ptr [ESI + 0x7f4fd7],EAX
004359E6  75 3A                     JNZ 0x00435a22
004359E8  66 83 BE E1 4F 7F 00 01   CMP word ptr [ESI + 0x7f4fe1],0x1
004359F0  75 30                     JNZ 0x00435a22
004359F2  8B 9E DD 4F 7F 00         MOV EBX,dword ptr [ESI + 0x7f4fdd]
004359F8  33 FF                     XOR EDI,EDI
004359FA  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
004359FD  85 C0                     TEST EAX,EAX
004359FF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00435A02  7E 1E                     JLE 0x00435a22
LAB_00435a04:
00435A04  8D 55 FC                  LEA EDX,[EBP + -0x4]
00435A07  8B CB                     MOV ECX,EBX
00435A09  52                        PUSH EDX
00435A0A  8B D7                     MOV EDX,EDI
00435A0C  E8 5F 72 27 00            CALL 0x006acc70
00435A11  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00435A14  66 3D FF FF               CMP AX,0xffff
00435A18  75 14                     JNZ 0x00435a2e
00435A1A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00435A1D  47                        INC EDI
00435A1E  3B F8                     CMP EDI,EAX
00435A20  7C E2                     JL 0x00435a04
LAB_00435a22:
00435A22  5F                        POP EDI
00435A23  5E                        POP ESI
00435A24  66 33 C0                  XOR AX,AX
00435A27  5B                        POP EBX
00435A28  8B E5                     MOV ESP,EBP
00435A2A  5D                        POP EBP
00435A2B  C2 10 00                  RET 0x10
LAB_00435a2e:
00435A2E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00435A31  6A 01                     PUSH 0x1
00435A33  50                        PUSH EAX
00435A34  8A 86 D7 4F 7F 00         MOV AL,byte ptr [ESI + 0x7f4fd7]
00435A3A  50                        PUSH EAX
00435A3B  E8 7A CE FC FF            CALL 0x004028ba
00435A40  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00435A43  8B 10                     MOV EDX,dword ptr [EAX]
00435A45  51                        PUSH ECX
00435A46  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00435A49  51                        PUSH ECX
00435A4A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00435A4D  51                        PUSH ECX
00435A4E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00435A51  51                        PUSH ECX
00435A52  8B C8                     MOV ECX,EAX
00435A54  FF 52 28                  CALL dword ptr [EDX + 0x28]
00435A57  5F                        POP EDI
00435A58  5E                        POP ESI
00435A59  5B                        POP EBX
00435A5A  8B E5                     MOV ESP,EBP
00435A5C  5D                        POP EBP
00435A5D  C2 10 00                  RET 0x10
LAB_00435a60:
00435A60  8B 8E 83 4F 7F 00         MOV ECX,dword ptr [ESI + 0x7f4f83]
00435A66  85 C9                     TEST ECX,ECX
00435A68  75 6A                     JNZ 0x00435ad4
LAB_00435a6a:
00435A6A  85 FF                     TEST EDI,EDI
00435A6C  74 B4                     JZ 0x00435a22
00435A6E  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00435A71  33 D2                     XOR EDX,EDX
00435A73  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00435A79  3B C2                     CMP EAX,EDX
00435A7B  75 A5                     JNZ 0x00435a22
00435A7D  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
00435A81  75 1C                     JNZ 0x00435a9f
00435A83  8B 07                     MOV EAX,dword ptr [EDI]
00435A85  8B CF                     MOV ECX,EDI
00435A87  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
00435A8D  83 F8 01                  CMP EAX,0x1
00435A90  75 0D                     JNZ 0x00435a9f
00435A92  5F                        POP EDI
00435A93  5E                        POP ESI
00435A94  66 B8 03 00               MOV AX,0x3
00435A98  5B                        POP EBX
00435A99  8B E5                     MOV ESP,EBP
00435A9B  5D                        POP EBP
00435A9C  C2 10 00                  RET 0x10
LAB_00435a9f:
00435A9F  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00435AA2  3D E8 03 00 00            CMP EAX,0x3e8
00435AA7  74 0B                     JZ 0x00435ab4
00435AA9  3D E9 03 00 00            CMP EAX,0x3e9
00435AAE  0F 85 6E FF FF FF         JNZ 0x00435a22
LAB_00435ab4:
00435AB4  8B 17                     MOV EDX,dword ptr [EDI]
00435AB6  8B CF                     MOV ECX,EDI
00435AB8  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
00435ABE  83 F8 01                  CMP EAX,0x1
00435AC1  0F 85 5B FF FF FF         JNZ 0x00435a22
00435AC7  5F                        POP EDI
00435AC8  5E                        POP ESI
00435AC9  66 B8 04 00               MOV AX,0x4
00435ACD  5B                        POP EBX
00435ACE  8B E5                     MOV ESP,EBP
00435AD0  5D                        POP EBP
00435AD1  C2 10 00                  RET 0x10
LAB_00435ad4:
00435AD4  83 F9 3C                  CMP ECX,0x3c
00435AD7  0F 85 45 FF FF FF         JNZ 0x00435a22
00435ADD  39 86 87 4F 7F 00         CMP dword ptr [ESI + 0x7f4f87],EAX
00435AE3  0F 85 39 FF FF FF         JNZ 0x00435a22
00435AE9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00435AEC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00435AEF  50                        PUSH EAX
00435AF0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00435AF3  51                        PUSH ECX
00435AF4  8B 8E 8D 4F 7F 00         MOV ECX,dword ptr [ESI + 0x7f4f8d]
00435AFA  57                        PUSH EDI
00435AFB  50                        PUSH EAX
00435AFC  51                        PUSH ECX
00435AFD  52                        PUSH EDX
00435AFE  8B CB                     MOV ECX,EBX
00435B00  E8 98 DB FC FF            CALL 0x0040369d
00435B05  5F                        POP EDI
00435B06  5E                        POP ESI
00435B07  5B                        POP EBX
00435B08  8B E5                     MOV ESP,EBP
00435B0A  5D                        POP EBP
00435B0B  C2 10 00                  RET 0x10
