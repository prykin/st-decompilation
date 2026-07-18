FUN_00745f50:
00745F50  55                        PUSH EBP
00745F51  8B EC                     MOV EBP,ESP
00745F53  51                        PUSH ECX
00745F54  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00745F57  3B 05 DC A2 85 00         CMP EAX,dword ptr [0x0085a2dc]
00745F5D  73 1F                     JNC 0x00745f7e
00745F5F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00745F62  C1 F9 05                  SAR ECX,0x5
00745F65  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00745F68  83 E2 1F                  AND EDX,0x1f
00745F6B  8B 04 8D A0 A1 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x85a1a0]
00745F72  0F BE 4C D0 04            MOVSX ECX,byte ptr [EAX + EDX*0x8 + 0x4]
00745F77  83 E1 01                  AND ECX,0x1
00745F7A  85 C9                     TEST ECX,ECX
00745F7C  75 12                     JNZ 0x00745f90
LAB_00745f7e:
00745F7E  C7 05 48 71 85 00 09 00 00 00  MOV dword ptr [0x00857148],0x9
00745F88  83 C8 FF                  OR EAX,0xffffffff
00745F8B  E9 B8 00 00 00            JMP 0x00746048
LAB_00745f90:
00745F90  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00745F93  C1 FA 05                  SAR EDX,0x5
00745F96  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00745F99  83 E0 1F                  AND EAX,0x1f
00745F9C  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
00745FA3  0F BE 54 C1 04            MOVSX EDX,byte ptr [ECX + EAX*0x8 + 0x4]
00745FA8  81 E2 80 00 00 00         AND EDX,0x80
00745FAE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00745FB1  81 7D 0C 00 80 00 00      CMP dword ptr [EBP + 0xc],0x8000
00745FB8  75 32                     JNZ 0x00745fec
00745FBA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00745FBD  C1 F8 05                  SAR EAX,0x5
00745FC0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00745FC3  83 E1 1F                  AND ECX,0x1f
00745FC6  8B 14 85 A0 A1 85 00      MOV EDX,dword ptr [EAX*0x4 + 0x85a1a0]
00745FCD  8A 44 CA 04               MOV AL,byte ptr [EDX + ECX*0x8 + 0x4]
00745FD1  24 7F                     AND AL,0x7f
00745FD3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00745FD6  C1 F9 05                  SAR ECX,0x5
00745FD9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00745FDC  83 E2 1F                  AND EDX,0x1f
00745FDF  8B 0C 8D A0 A1 85 00      MOV ECX,dword ptr [ECX*0x4 + 0x85a1a0]
00745FE6  88 44 D1 04               MOV byte ptr [ECX + EDX*0x8 + 0x4],AL
00745FEA  EB 4B                     JMP 0x00746037
LAB_00745fec:
00745FEC  81 7D 0C 00 40 00 00      CMP dword ptr [EBP + 0xc],0x4000
00745FF3  75 33                     JNZ 0x00746028
00745FF5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00745FF8  C1 FA 05                  SAR EDX,0x5
00745FFB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00745FFE  83 E0 1F                  AND EAX,0x1f
00746001  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
00746008  8A 54 C1 04               MOV DL,byte ptr [ECX + EAX*0x8 + 0x4]
0074600C  80 CA 80                  OR DL,0x80
0074600F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00746012  C1 F8 05                  SAR EAX,0x5
00746015  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00746018  83 E1 1F                  AND ECX,0x1f
0074601B  8B 04 85 A0 A1 85 00      MOV EAX,dword ptr [EAX*0x4 + 0x85a1a0]
00746022  88 54 C8 04               MOV byte ptr [EAX + ECX*0x8 + 0x4],DL
00746026  EB 0F                     JMP 0x00746037
LAB_00746028:
00746028  C7 05 48 71 85 00 16 00 00 00  MOV dword ptr [0x00857148],0x16
00746032  83 C8 FF                  OR EAX,0xffffffff
00746035  EB 11                     JMP 0x00746048
LAB_00746037:
00746037  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074603A  F7 D8                     NEG EAX
0074603C  1B C0                     SBB EAX,EAX
0074603E  25 00 C0 FF FF            AND EAX,0xffffc000
00746043  05 00 80 00 00            ADD EAX,0x8000
LAB_00746048:
00746048  8B E5                     MOV ESP,EBP
0074604A  5D                        POP EBP
0074604B  C3                        RET
