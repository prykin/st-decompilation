FUN_00730810:
00730810  55                        PUSH EBP
00730811  8B EC                     MOV EBP,ESP
00730813  81 EC 0C 01 00 00         SUB ESP,0x10c
00730819  83 7D 0C 02               CMP dword ptr [EBP + 0xc],0x2
0073081D  72 06                     JC 0x00730825
0073081F  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
00730823  75 05                     JNZ 0x0073082a
LAB_00730825:
00730825  E9 16 02 00 00            JMP 0x00730a40
LAB_0073082a:
0073082A  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00730831  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00730834  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00730837  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073083A  83 E9 01                  SUB ECX,0x1
0073083D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00730840  0F AF D1                  IMUL EDX,ECX
00730843  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00730846  03 C2                     ADD EAX,EDX
00730848  89 85 F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],EAX
LAB_0073084e:
0073084E  8B 85 F4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffef4]
00730854  2B 45 F4                  SUB EAX,dword ptr [EBP + -0xc]
00730857  33 D2                     XOR EDX,EDX
00730859  F7 75 10                  DIV dword ptr [EBP + 0x10]
0073085C  83 C0 01                  ADD EAX,0x1
0073085F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00730862  83 7D FC 08               CMP dword ptr [EBP + -0x4],0x8
00730866  77 20                     JA 0x00730888
00730868  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0073086B  51                        PUSH ECX
0073086C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0073086F  52                        PUSH EDX
00730870  8B 85 F4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffef4]
00730876  50                        PUSH EAX
00730877  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073087A  51                        PUSH ECX
0073087B  E8 D0 01 00 00            CALL 0x00730a50
00730880  83 C4 10                  ADD ESP,0x10
00730883  E9 87 01 00 00            JMP 0x00730a0f
LAB_00730888:
00730888  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073088B  D1 EA                     SHR EDX,0x1
0073088D  0F AF 55 10               IMUL EDX,dword ptr [EBP + 0x10]
00730891  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00730894  03 C2                     ADD EAX,EDX
00730896  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00730899  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073089C  51                        PUSH ECX
0073089D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007308A0  52                        PUSH EDX
007308A1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007308A4  50                        PUSH EAX
007308A5  E8 16 02 00 00            CALL 0x00730ac0
007308AA  83 C4 0C                  ADD ESP,0xc
007308AD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007308B0  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
007308B3  8B 95 F4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef4]
007308B9  03 55 10                  ADD EDX,dword ptr [EBP + 0x10]
007308BC  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
LAB_007308c2:
007308C2  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
007308C5  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
007308C8  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
007308CB  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
007308CE  3B 8D F4 FE FF FF         CMP ECX,dword ptr [EBP + 0xfffffef4]
007308D4  77 12                     JA 0x007308e8
007308D6  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007308D9  52                        PUSH EDX
007308DA  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
007308DD  50                        PUSH EAX
007308DE  FF 55 14                  CALL dword ptr [EBP + 0x14]
007308E1  83 C4 08                  ADD ESP,0x8
007308E4  85 C0                     TEST EAX,EAX
007308E6  7E DA                     JLE 0x007308c2
LAB_007308e8:
007308E8  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
007308EE  2B 4D 10                  SUB ECX,dword ptr [EBP + 0x10]
007308F1  89 8D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ECX
007308F7  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
007308FD  3B 55 F4                  CMP EDX,dword ptr [EBP + -0xc]
00730900  76 15                     JBE 0x00730917
00730902  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00730905  50                        PUSH EAX
00730906  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
0073090C  51                        PUSH ECX
0073090D  FF 55 14                  CALL dword ptr [EBP + 0x14]
00730910  83 C4 08                  ADD ESP,0x8
00730913  85 C0                     TEST EAX,EAX
00730915  7D D1                     JGE 0x007308e8
LAB_00730917:
00730917  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
0073091D  3B 55 EC                  CMP EDX,dword ptr [EBP + -0x14]
00730920  73 02                     JNC 0x00730924
00730922  EB 19                     JMP 0x0073093d
LAB_00730924:
00730924  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00730927  50                        PUSH EAX
00730928  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
0073092E  51                        PUSH ECX
0073092F  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00730932  52                        PUSH EDX
00730933  E8 88 01 00 00            CALL 0x00730ac0
00730938  83 C4 0C                  ADD ESP,0xc
0073093B  EB 85                     JMP 0x007308c2
LAB_0073093d:
0073093D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00730940  50                        PUSH EAX
00730941  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
00730947  51                        PUSH ECX
00730948  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073094B  52                        PUSH EDX
0073094C  E8 6F 01 00 00            CALL 0x00730ac0
00730951  83 C4 0C                  ADD ESP,0xc
00730954  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
0073095A  83 E8 01                  SUB EAX,0x1
0073095D  2B 45 F4                  SUB EAX,dword ptr [EBP + -0xc]
00730960  8B 8D F4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffef4]
00730966  2B 4D EC                  SUB ECX,dword ptr [EBP + -0x14]
00730969  3B C1                     CMP EAX,ECX
0073096B  7C 4F                     JL 0x007309bc
0073096D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00730970  03 55 10                  ADD EDX,dword ptr [EBP + 0x10]
00730973  3B 95 70 FF FF FF         CMP EDX,dword ptr [EBP + 0xffffff70]
00730979  73 29                     JNC 0x007309a4
0073097B  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0073097E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00730981  89 8C 85 74 FF FF FF      MOV dword ptr [EBP + EAX*0x4 + 0xffffff74],ECX
00730988  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
0073098E  2B 55 10                  SUB EDX,dword ptr [EBP + 0x10]
00730991  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00730994  89 94 85 F8 FE FF FF      MOV dword ptr [EBP + EAX*0x4 + 0xfffffef8],EDX
0073099B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0073099E  83 C1 01                  ADD ECX,0x1
007309A1  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_007309a4:
007309A4  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
007309A7  3B 95 F4 FE FF FF         CMP EDX,dword ptr [EBP + 0xfffffef4]
007309AD  73 0B                     JNC 0x007309ba
007309AF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
007309B2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
007309B5  E9 94 FE FF FF            JMP 0x0073084e
LAB_007309ba:
007309BA  EB 53                     JMP 0x00730a0f
LAB_007309bc:
007309BC  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
007309BF  3B 8D F4 FE FF FF         CMP ECX,dword ptr [EBP + 0xfffffef4]
007309C5  73 26                     JNC 0x007309ed
007309C7  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
007309CA  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
007309CD  89 84 95 74 FF FF FF      MOV dword ptr [EBP + EDX*0x4 + 0xffffff74],EAX
007309D4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007309D7  8B 95 F4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef4]
007309DD  89 94 8D F8 FE FF FF      MOV dword ptr [EBP + ECX*0x4 + 0xfffffef8],EDX
007309E4  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
007309E7  83 C0 01                  ADD EAX,0x1
007309EA  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_007309ed:
007309ED  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007309F0  03 4D 10                  ADD ECX,dword ptr [EBP + 0x10]
007309F3  3B 8D 70 FF FF FF         CMP ECX,dword ptr [EBP + 0xffffff70]
007309F9  73 14                     JNC 0x00730a0f
007309FB  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
00730A01  2B 55 10                  SUB EDX,dword ptr [EBP + 0x10]
00730A04  89 95 F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],EDX
00730A0A  E9 3F FE FF FF            JMP 0x0073084e
LAB_00730a0f:
00730A0F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00730A12  83 E8 01                  SUB EAX,0x1
00730A15  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00730A18  83 7D F0 00               CMP dword ptr [EBP + -0x10],0x0
00730A1C  7C 22                     JL 0x00730a40
00730A1E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00730A21  8B 94 8D 74 FF FF FF      MOV EDX,dword ptr [EBP + ECX*0x4 + 0xffffff74]
00730A28  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00730A2B  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00730A2E  8B 8C 85 F8 FE FF FF      MOV ECX,dword ptr [EBP + EAX*0x4 + 0xfffffef8]
00730A35  89 8D F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],ECX
00730A3B  E9 0E FE FF FF            JMP 0x0073084e
LAB_00730a40:
00730A40  8B E5                     MOV ESP,EBP
00730A42  5D                        POP EBP
00730A43  C3                        RET
