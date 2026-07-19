PlrDataPack:
0067D3B0  55                        PUSH EBP
0067D3B1  8B EC                     MOV EBP,ESP
0067D3B3  83 EC 58                  SUB ESP,0x58
0067D3B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067D3BB  53                        PUSH EBX
0067D3BC  56                        PUSH ESI
0067D3BD  57                        PUSH EDI
0067D3BE  33 FF                     XOR EDI,EDI
0067D3C0  8D 55 AC                  LEA EDX,[EBP + -0x54]
0067D3C3  8D 4D A8                  LEA ECX,[EBP + -0x58]
0067D3C6  57                        PUSH EDI
0067D3C7  52                        PUSH EDX
0067D3C8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0067D3CB  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0067D3CE  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0067D3D1  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0067D3D4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067D3DA  E8 11 04 0B 00            CALL 0x0072d7f0
0067D3DF  8B F0                     MOV ESI,EAX
0067D3E1  83 C4 08                  ADD ESP,0x8
0067D3E4  3B F7                     CMP ESI,EDI
0067D3E6  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0067D3E9  0F 85 B0 02 00 00         JNZ 0x0067d69f
0067D3EF  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0067D3F2  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0067D3F5  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0067D3F8  80 7F 18 02               CMP byte ptr [EDI + 0x18],0x2
0067D3FC  75 7C                     JNZ 0x0067d47a
0067D3FE  8B 87 C2 00 00 00         MOV EAX,dword ptr [EDI + 0xc2]
0067D404  85 C0                     TEST EAX,EAX
0067D406  74 72                     JZ 0x0067d47a
0067D408  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0067D40B  85 C0                     TEST EAX,EAX
0067D40D  74 6B                     JZ 0x0067d47a
0067D40F  C1 E0 02                  SHL EAX,0x2
0067D412  50                        PUSH EAX
0067D413  E8 F8 D7 02 00            CALL 0x006aac10
0067D418  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0067D41B  8B 87 C2 00 00 00         MOV EAX,dword ptr [EDI + 0xc2]
0067D421  33 F6                     XOR ESI,ESI
0067D423  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067D426  85 C9                     TEST ECX,ECX
0067D428  7E 4D                     JLE 0x0067d477
0067D42A  3B F1                     CMP ESI,ECX
LAB_0067d42c:
0067D42C  73 0D                     JNC 0x0067d43b
0067D42E  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0067D431  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0067D434  0F AF FE                  IMUL EDI,ESI
0067D437  03 F9                     ADD EDI,ECX
0067D439  EB 02                     JMP 0x0067d43d
LAB_0067d43b:
0067D43B  33 FF                     XOR EDI,EDI
LAB_0067d43d:
0067D43D  8B 07                     MOV EAX,dword ptr [EDI]
0067D43F  85 C0                     TEST EAX,EAX
0067D441  74 21                     JZ 0x0067d464
0067D443  80 78 18 02               CMP byte ptr [EAX + 0x18],0x2
0067D447  75 1B                     JNZ 0x0067d464
0067D449  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0067D44C  8D 57 0C                  LEA EDX,[EDI + 0xc]
0067D44F  52                        PUSH EDX
0067D450  89 04 B1                  MOV dword ptr [ECX + ESI*0x4],EAX
0067D453  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0067D456  8B 0C B0                  MOV ECX,dword ptr [EAX + ESI*0x4]
0067D459  51                        PUSH ECX
0067D45A  E8 2D 7D D8 FF            CALL 0x0040518c
0067D45F  83 C4 08                  ADD ESP,0x8
0067D462  89 07                     MOV dword ptr [EDI],EAX
LAB_0067d464:
0067D464  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067D467  46                        INC ESI
0067D468  8B 82 C2 00 00 00         MOV EAX,dword ptr [EDX + 0xc2]
0067D46E  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067D471  3B F1                     CMP ESI,ECX
0067D473  7C B7                     JL 0x0067d42c
0067D475  8B FA                     MOV EDI,EDX
LAB_0067d477:
0067D477  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_0067d47a:
0067D47A  8B 97 C2 00 00 00         MOV EDX,dword ptr [EDI + 0xc2]
0067D480  8D 8F C2 00 00 00         LEA ECX,[EDI + 0xc2]
0067D486  85 D2                     TEST EDX,EDX
0067D488  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0067D48B  74 39                     JZ 0x0067d4c6
0067D48D  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0067D490  33 F6                     XOR ESI,ESI
0067D492  85 C0                     TEST EAX,EAX
0067D494  7E 30                     JLE 0x0067d4c6
0067D496  3B F0                     CMP ESI,EAX
LAB_0067d498:
0067D498  73 0D                     JNC 0x0067d4a7
0067D49A  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0067D49D  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
0067D4A0  0F AF C6                  IMUL EAX,ESI
0067D4A3  03 C1                     ADD EAX,ECX
0067D4A5  EB 02                     JMP 0x0067d4a9
LAB_0067d4a7:
0067D4A7  33 C0                     XOR EAX,EAX
LAB_0067d4a9:
0067D4A9  8B 08                     MOV ECX,dword ptr [EAX]
0067D4AB  85 C9                     TEST ECX,ECX
0067D4AD  74 0C                     JZ 0x0067d4bb
0067D4AF  80 79 18 00               CMP byte ptr [ECX + 0x18],0x0
0067D4B3  75 06                     JNZ 0x0067d4bb
0067D4B5  03 58 0C                  ADD EBX,dword ptr [EAX + 0xc]
0067D4B8  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_0067d4bb:
0067D4BB  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0067D4BE  46                        INC ESI
0067D4BF  3B F0                     CMP ESI,EAX
0067D4C1  7C D5                     JL 0x0067d498
0067D4C3  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_0067d4c6:
0067D4C6  BA 05 00 00 00            MOV EDX,0x5
LAB_0067d4cb:
0067D4CB  8B 01                     MOV EAX,dword ptr [ECX]
0067D4CD  85 C0                     TEST EAX,EAX
0067D4CF  74 12                     JZ 0x0067d4e3
0067D4D1  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
0067D4D4  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
0067D4D8  8D 46 1C                  LEA EAX,[ESI + 0x1c]
0067D4DB  03 D8                     ADD EBX,EAX
0067D4DD  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0067D4E0  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_0067d4e3:
0067D4E3  83 C1 0C                  ADD ECX,0xc
0067D4E6  4A                        DEC EDX
0067D4E7  75 E2                     JNZ 0x0067d4cb
0067D4E9  8D 83 2B 01 00 00         LEA EAX,[EBX + 0x12b]
0067D4EF  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0067D4F2  50                        PUSH EAX
0067D4F3  89 03                     MOV dword ptr [EBX],EAX
0067D4F5  E8 16 D7 02 00            CALL 0x006aac10
0067D4FA  8B F7                     MOV ESI,EDI
0067D4FC  B9 4A 00 00 00            MOV ECX,0x4a
0067D501  8B F8                     MOV EDI,EAX
0067D503  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067D506  F3 A5                     MOVSD.REP ES:EDI,ESI
0067D508  66 A5                     MOVSW ES:EDI,ESI
0067D50A  A4                        MOVSB ES:EDI,ESI
0067D50B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067D50E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0067D511  C6 40 18 00               MOV byte ptr [EAX + 0x18],0x0
0067D515  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0067D518  8B 0B                     MOV ECX,dword ptr [EBX]
0067D51A  89 4A 14                  MOV dword ptr [EDX + 0x14],ECX
0067D51D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067D520  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0067D523  89 88 02 01 00 00         MOV dword ptr [EAX + 0x102],ECX
0067D529  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067D52C  8B 88 02 01 00 00         MOV ECX,dword ptr [EAX + 0x102]
0067D532  8D 98 2A 01 00 00         LEA EBX,[EAX + 0x12a]
0067D538  8B D1                     MOV EDX,ECX
0067D53A  8B FB                     MOV EDI,EBX
0067D53C  C1 E9 02                  SHR ECX,0x2
0067D53F  F3 A5                     MOVSD.REP ES:EDI,ESI
0067D541  8B CA                     MOV ECX,EDX
0067D543  83 E1 03                  AND ECX,0x3
0067D546  F3 A4                     MOVSB.REP ES:EDI,ESI
0067D548  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067D54B  8B CB                     MOV ECX,EBX
0067D54D  2B C8                     SUB ECX,EAX
0067D54F  81 E9 2A 01 00 00         SUB ECX,0x12a
0067D555  89 88 FE 00 00 00         MOV dword ptr [EAX + 0xfe],ECX
0067D55B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067D55E  8B 88 C2 00 00 00         MOV ECX,dword ptr [EAX + 0xc2]
0067D564  8B B8 02 01 00 00         MOV EDI,dword ptr [EAX + 0x102]
0067D56A  03 DF                     ADD EBX,EDI
0067D56C  33 FF                     XOR EDI,EDI
0067D56E  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0067D571  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0067D574  85 D2                     TEST EDX,EDX
0067D576  7E 5F                     JLE 0x0067d5d7
0067D578  3B FA                     CMP EDI,EDX
LAB_0067d57a:
0067D57A  73 0D                     JNC 0x0067d589
0067D57C  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0067D57F  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
0067D582  0F AF D7                  IMUL EDX,EDI
0067D585  03 D6                     ADD EDX,ESI
0067D587  EB 02                     JMP 0x0067d58b
LAB_0067d589:
0067D589  33 D2                     XOR EDX,EDX
LAB_0067d58b:
0067D58B  8B 32                     MOV ESI,dword ptr [EDX]
0067D58D  85 F6                     TEST ESI,ESI
0067D58F  74 35                     JZ 0x0067d5c6
0067D591  8A 4E 18                  MOV CL,byte ptr [ESI + 0x18]
0067D594  84 C9                     TEST CL,CL
0067D596  75 2E                     JNZ 0x0067d5c6
0067D598  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
0067D59B  8B FB                     MOV EDI,EBX
0067D59D  8B C1                     MOV EAX,ECX
0067D59F  C1 E9 02                  SHR ECX,0x2
0067D5A2  F3 A5                     MOVSD.REP ES:EDI,ESI
0067D5A4  8B C8                     MOV ECX,EAX
0067D5A6  83 E1 03                  AND ECX,0x3
0067D5A9  F3 A4                     MOVSB.REP ES:EDI,ESI
0067D5AB  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0067D5AE  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0067D5B1  8B CB                     MOV ECX,EBX
0067D5B3  2B CF                     SUB ECX,EDI
0067D5B5  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0067D5B8  81 E9 2A 01 00 00         SUB ECX,0x12a
0067D5BE  03 D8                     ADD EBX,EAX
0067D5C0  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
0067D5C3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0067d5c6:
0067D5C6  8B 88 C2 00 00 00         MOV ECX,dword ptr [EAX + 0xc2]
0067D5CC  47                        INC EDI
0067D5CD  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0067D5D0  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0067D5D3  3B FA                     CMP EDI,EDX
0067D5D5  7C A3                     JL 0x0067d57a
LAB_0067d5d7:
0067D5D7  33 F6                     XOR ESI,ESI
LAB_0067d5d9:
0067D5D9  8B 8C 06 C2 00 00 00      MOV ECX,dword ptr [ESI + EAX*0x1 + 0xc2]
0067D5E0  85 C9                     TEST ECX,ECX
0067D5E2  74 29                     JZ 0x0067d60d
0067D5E4  8D 55 F4                  LEA EDX,[EBP + -0xc]
0067D5E7  52                        PUSH EDX
0067D5E8  53                        PUSH EBX
0067D5E9  51                        PUSH ECX
0067D5EA  E8 D1 29 03 00            CALL 0x006affc0
0067D5EF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067D5F2  8B CB                     MOV ECX,EBX
0067D5F4  2B C8                     SUB ECX,EAX
0067D5F6  81 E9 2A 01 00 00         SUB ECX,0x12a
0067D5FC  89 8C 06 C6 00 00 00      MOV dword ptr [ESI + EAX*0x1 + 0xc6],ECX
0067D603  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067D606  03 9C 06 CA 00 00 00      ADD EBX,dword ptr [ESI + EAX*0x1 + 0xca]
LAB_0067d60d:
0067D60D  83 C6 0C                  ADD ESI,0xc
0067D610  83 FE 3C                  CMP ESI,0x3c
0067D613  7C C4                     JL 0x0067d5d9
0067D615  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067D618  80 7A 18 02               CMP byte ptr [EDX + 0x18],0x2
0067D61C  75 71                     JNZ 0x0067d68f
0067D61E  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0067D621  8B 0B                     MOV ECX,dword ptr [EBX]
0067D623  85 C9                     TEST ECX,ECX
0067D625  74 68                     JZ 0x0067d68f
0067D627  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0067D62A  85 D2                     TEST EDX,EDX
0067D62C  74 61                     JZ 0x0067d68f
0067D62E  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0067D631  85 F6                     TEST ESI,ESI
0067D633  74 5A                     JZ 0x0067d68f
0067D635  33 FF                     XOR EDI,EDI
0067D637  85 D2                     TEST EDX,EDX
0067D639  7E 48                     JLE 0x0067d683
0067D63B  3B FA                     CMP EDI,EDX
LAB_0067d63d:
0067D63D  73 0D                     JNC 0x0067d64c
0067D63F  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0067D642  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
0067D645  0F AF F7                  IMUL ESI,EDI
0067D648  03 F0                     ADD ESI,EAX
0067D64A  EB 02                     JMP 0x0067d64e
LAB_0067d64c:
0067D64C  33 F6                     XOR ESI,ESI
LAB_0067d64e:
0067D64E  8B 06                     MOV EAX,dword ptr [ESI]
0067D650  85 C0                     TEST EAX,EAX
0067D652  74 25                     JZ 0x0067d679
0067D654  8A 48 18                  MOV CL,byte ptr [EAX + 0x18]
0067D657  84 C9                     TEST CL,CL
0067D659  75 1E                     JNZ 0x0067d679
0067D65B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0067D65E  8B 04 B8                  MOV EAX,dword ptr [EAX + EDI*0x4]
0067D661  85 C0                     TEST EAX,EAX
0067D663  74 14                     JZ 0x0067d679
0067D665  80 78 18 02               CMP byte ptr [EAX + 0x18],0x2
0067D669  75 0E                     JNZ 0x0067d679
0067D66B  56                        PUSH ESI
0067D66C  E8 EF D9 02 00            CALL 0x006ab060
0067D671  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0067D674  8B 14 B9                  MOV EDX,dword ptr [ECX + EDI*0x4]
0067D677  89 16                     MOV dword ptr [ESI],EDX
LAB_0067d679:
0067D679  8B 0B                     MOV ECX,dword ptr [EBX]
0067D67B  47                        INC EDI
0067D67C  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0067D67F  3B FA                     CMP EDI,EDX
0067D681  7C BA                     JL 0x0067d63d
LAB_0067d683:
0067D683  8D 45 F8                  LEA EAX,[EBP + -0x8]
0067D686  50                        PUSH EAX
0067D687  E8 D4 D9 02 00            CALL 0x006ab060
0067D68C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0067d68f:
0067D68F  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0067D692  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067D698  5F                        POP EDI
0067D699  5E                        POP ESI
0067D69A  5B                        POP EBX
0067D69B  8B E5                     MOV ESP,EBP
0067D69D  5D                        POP EBP
0067D69E  C3                        RET
LAB_0067d69f:
0067D69F  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0067D6A2  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0067D6A5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067D6AB  80 7B 18 02               CMP byte ptr [EBX + 0x18],0x2
0067D6AF  75 74                     JNZ 0x0067d725
0067D6B1  8B 83 C2 00 00 00         MOV EAX,dword ptr [EBX + 0xc2]
0067D6B7  3B C7                     CMP EAX,EDI
0067D6B9  74 6A                     JZ 0x0067d725
0067D6BB  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067D6BE  3B CF                     CMP ECX,EDI
0067D6C0  74 63                     JZ 0x0067d725
0067D6C2  39 7D F8                  CMP dword ptr [EBP + -0x8],EDI
0067D6C5  74 5E                     JZ 0x0067d725
0067D6C7  85 C9                     TEST ECX,ECX
0067D6C9  7E 4F                     JLE 0x0067d71a
0067D6CB  3B F9                     CMP EDI,ECX
LAB_0067d6cd:
0067D6CD  73 0D                     JNC 0x0067d6dc
0067D6CF  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0067D6D2  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0067D6D5  0F AF F7                  IMUL ESI,EDI
0067D6D8  03 F1                     ADD ESI,ECX
0067D6DA  EB 02                     JMP 0x0067d6de
LAB_0067d6dc:
0067D6DC  33 F6                     XOR ESI,ESI
LAB_0067d6de:
0067D6DE  8B 06                     MOV EAX,dword ptr [ESI]
0067D6E0  85 C0                     TEST EAX,EAX
0067D6E2  74 25                     JZ 0x0067d709
0067D6E4  8A 48 18                  MOV CL,byte ptr [EAX + 0x18]
0067D6E7  84 C9                     TEST CL,CL
0067D6E9  75 1E                     JNZ 0x0067d709
0067D6EB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0067D6EE  8B 04 B8                  MOV EAX,dword ptr [EAX + EDI*0x4]
0067D6F1  85 C0                     TEST EAX,EAX
0067D6F3  74 14                     JZ 0x0067d709
0067D6F5  80 78 18 02               CMP byte ptr [EAX + 0x18],0x2
0067D6F9  75 0E                     JNZ 0x0067d709
0067D6FB  56                        PUSH ESI
0067D6FC  E8 5F D9 02 00            CALL 0x006ab060
0067D701  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0067D704  8B 14 B9                  MOV EDX,dword ptr [ECX + EDI*0x4]
0067D707  89 16                     MOV dword ptr [ESI],EDX
LAB_0067d709:
0067D709  8B 83 C2 00 00 00         MOV EAX,dword ptr [EBX + 0xc2]
0067D70F  47                        INC EDI
0067D710  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067D713  3B F9                     CMP EDI,ECX
0067D715  7C B6                     JL 0x0067d6cd
0067D717  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_0067d71a:
0067D71A  8D 45 F8                  LEA EAX,[EBP + -0x8]
0067D71D  50                        PUSH EAX
0067D71E  E8 3D D9 02 00            CALL 0x006ab060
0067D723  33 FF                     XOR EDI,EDI
LAB_0067d725:
0067D725  39 7D F8                  CMP dword ptr [EBP + -0x8],EDI
0067D728  74 09                     JZ 0x0067d733
0067D72A  8D 4D F8                  LEA ECX,[EBP + -0x8]
0067D72D  51                        PUSH ECX
0067D72E  E8 2D D9 02 00            CALL 0x006ab060
LAB_0067d733:
0067D733  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0067D736  74 09                     JZ 0x0067d741
0067D738  8D 55 FC                  LEA EDX,[EBP + -0x4]
0067D73B  52                        PUSH EDX
0067D73C  E8 1F D9 02 00            CALL 0x006ab060
LAB_0067d741:
0067D741  68 C8 2F 7D 00            PUSH 0x7d2fc8
0067D746  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067D74B  56                        PUSH ESI
0067D74C  57                        PUSH EDI
0067D74D  68 DA 00 00 00            PUSH 0xda
0067D752  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067D757  E8 74 FD 02 00            CALL 0x006ad4d0
0067D75C  83 C4 18                  ADD ESP,0x18
0067D75F  85 C0                     TEST EAX,EAX
0067D761  74 01                     JZ 0x0067d764
0067D763  CC                        INT3
LAB_0067d764:
0067D764  68 DB 00 00 00            PUSH 0xdb
0067D769  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067D76E  57                        PUSH EDI
0067D76F  56                        PUSH ESI
0067D770  E8 CB 86 02 00            CALL 0x006a5e40
0067D775  5F                        POP EDI
0067D776  5E                        POP ESI
0067D777  33 C0                     XOR EAX,EAX
0067D779  5B                        POP EBX
0067D77A  8B E5                     MOV ESP,EBP
0067D77C  5D                        POP EBP
0067D77D  C3                        RET
