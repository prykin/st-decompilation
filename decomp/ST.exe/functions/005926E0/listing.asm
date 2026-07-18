FUN_005926e0:
005926E0  55                        PUSH EBP
005926E1  8B EC                     MOV EBP,ESP
005926E3  83 EC 64                  SUB ESP,0x64
005926E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005926EB  53                        PUSH EBX
005926EC  56                        PUSH ESI
005926ED  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005926F0  57                        PUSH EDI
005926F1  8D 55 A0                  LEA EDX,[EBP + -0x60]
005926F4  8D 4D 9C                  LEA ECX,[EBP + -0x64]
005926F7  6A 00                     PUSH 0x0
005926F9  52                        PUSH EDX
005926FA  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
005926FD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00592703  E8 E8 B0 19 00            CALL 0x0072d7f0
00592708  8B F0                     MOV ESI,EAX
0059270A  83 C4 08                  ADD ESP,0x8
0059270D  85 F6                     TEST ESI,ESI
0059270F  0F 85 C0 05 00 00         JNZ 0x00592cd5
00592715  A1 6C 17 81 00            MOV EAX,[0x0081176c]
0059271A  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0059271D  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
00592720  85 C9                     TEST ECX,ECX
00592722  0F 84 5A 04 00 00         JZ 0x00592b82
00592728  8A 87 E7 1B 00 00         MOV AL,byte ptr [EDI + 0x1be7]
0059272E  84 C0                     TEST AL,AL
00592730  0F 85 46 04 00 00         JNZ 0x00592b7c
00592736  8B 8F E8 1B 00 00         MOV ECX,dword ptr [EDI + 0x1be8]
0059273C  8D B7 D7 1B 00 00         LEA ESI,[EDI + 0x1bd7]
00592742  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00592745  BB 04 00 00 00            MOV EBX,0x4
LAB_0059274a:
0059274A  8B 06                     MOV EAX,dword ptr [ESI]
0059274C  85 C0                     TEST EAX,EAX
0059274E  74 08                     JZ 0x00592758
00592750  50                        PUSH EAX
00592751  8B CF                     MOV ECX,EDI
00592753  E8 B1 0C E7 FF            CALL 0x00403409
LAB_00592758:
00592758  83 C6 04                  ADD ESI,0x4
0059275B  4B                        DEC EBX
0059275C  75 EC                     JNZ 0x0059274a
0059275E  8B 9F E8 1B 00 00         MOV EBX,dword ptr [EDI + 0x1be8]
00592764  BA 05 00 00 00            MOV EDX,0x5
00592769  83 FB 08                  CMP EBX,0x8
0059276C  BE 06 00 00 00            MOV ESI,0x6
00592771  B8 0A 00 00 00            MOV EAX,0xa
00592776  B9 0B 00 00 00            MOV ECX,0xb
0059277B  0F 87 A5 00 00 00         JA 0x00592826
switchD_00592781::switchD:
00592781  FF 24 9D 1C 2D 59 00      JMP dword ptr [EBX*0x4 + 0x592d1c]
switchD_00592781::caseD_0:
00592788  B8 04 00 00 00            MOV EAX,0x4
0059278D  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
00592794  C7 45 E4 02 00 00 00      MOV dword ptr [EBP + -0x1c],0x2
0059279B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0059279E  C7 45 EC 03 00 00 00      MOV dword ptr [EBP + -0x14],0x3
005927A5  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
005927AC  EB 7B                     JMP 0x00592829
switchD_00592781::caseD_1:
005927AE  B8 07 00 00 00            MOV EAX,0x7
005927B3  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
005927BA  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005927BD  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005927C0  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
005927C3  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
005927CA  EB 5D                     JMP 0x00592829
switchD_00592781::caseD_2:
005927CC  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005927CF  B8 0C 00 00 00            MOV EAX,0xc
005927D4  C7 45 E0 08 00 00 00      MOV dword ptr [EBP + -0x20],0x8
005927DB  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005927DE  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005927E1  C7 45 F0 09 00 00 00      MOV dword ptr [EBP + -0x10],0x9
005927E8  EB 3F                     JMP 0x00592829
switchD_00592781::caseD_7:
005927EA  B8 09 00 00 00            MOV EAX,0x9
005927EF  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
005927F2  C7 45 E4 07 00 00 00      MOV dword ptr [EBP + -0x1c],0x7
005927F9  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005927FC  C7 45 EC 08 00 00 00      MOV dword ptr [EBP + -0x14],0x8
00592803  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00592806  EB 21                     JMP 0x00592829
switchD_00592781::caseD_8:
00592808  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0059280B  B8 0E 00 00 00            MOV EAX,0xe
00592810  C7 45 E4 0C 00 00 00      MOV dword ptr [EBP + -0x1c],0xc
00592817  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0059281A  C7 45 EC 0D 00 00 00      MOV dword ptr [EBP + -0x14],0xd
00592821  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00592824  EB 03                     JMP 0x00592829
LAB_00592826:
00592826  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
switchD_00592781::default:
00592829  83 FB 08                  CMP EBX,0x8
0059282C  77 1D                     JA 0x0059284b
0059282E  33 D2                     XOR EDX,EDX
00592830  8A 93 4C 2D 59 00         MOV DL,byte ptr [EBX + 0x592d4c]
switchD_00592836::switchD:
00592836  FF 24 95 40 2D 59 00      JMP dword ptr [EDX*0x4 + 0x592d40]
switchD_00592836::caseD_3:
0059283D  B9 01 00 00 00            MOV ECX,0x1
00592842  EB 09                     JMP 0x0059284d
switchD_00592836::caseD_6:
00592844  B9 02 00 00 00            MOV ECX,0x2
00592849  EB 02                     JMP 0x0059284d
switchD_00592836::caseD_0:
0059284B  33 C9                     XOR ECX,ECX
LAB_0059284d:
0059284D  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00592850  8D 14 88                  LEA EDX,[EAX + ECX*0x4]
00592853  03 CA                     ADD ECX,EDX
00592855  8B 94 8F 13 1B 00 00      MOV EDX,dword ptr [EDI + ECX*0x4 + 0x1b13]
0059285C  85 D2                     TEST EDX,EDX
0059285E  0F 84 61 01 00 00         JZ 0x005929c5
00592864  83 FB 08                  CMP EBX,0x8
00592867  77 1D                     JA 0x00592886
00592869  33 C9                     XOR ECX,ECX
0059286B  8A 8B 64 2D 59 00         MOV CL,byte ptr [EBX + 0x592d64]
switchD_00592871::switchD:
00592871  FF 24 8D 58 2D 59 00      JMP dword ptr [ECX*0x4 + 0x592d58]
switchD_00592871::caseD_3:
00592878  BA 01 00 00 00            MOV EDX,0x1
0059287D  EB 09                     JMP 0x00592888
switchD_00592871::caseD_6:
0059287F  BA 02 00 00 00            MOV EDX,0x2
00592884  EB 02                     JMP 0x00592888
switchD_00592871::caseD_0:
00592886  33 D2                     XOR EDX,EDX
LAB_00592888:
00592888  83 FB 08                  CMP EBX,0x8
0059288B  77 1D                     JA 0x005928aa
0059288D  33 C9                     XOR ECX,ECX
0059288F  8A 8B 7C 2D 59 00         MOV CL,byte ptr [EBX + 0x592d7c]
switchD_00592895::switchD:
00592895  FF 24 8D 70 2D 59 00      JMP dword ptr [ECX*0x4 + 0x592d70]
switchD_00592895::caseD_3:
0059289C  B9 01 00 00 00            MOV ECX,0x1
005928A1  EB 09                     JMP 0x005928ac
switchD_00592895::caseD_6:
005928A3  B9 02 00 00 00            MOV ECX,0x2
005928A8  EB 02                     JMP 0x005928ac
switchD_00592895::caseD_0:
005928AA  33 C9                     XOR ECX,ECX
LAB_005928ac:
005928AC  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005928AF  8D 34 88                  LEA ESI,[EAX + ECX*0x4]
005928B2  03 CE                     ADD ECX,ESI
005928B4  8B B4 8F 13 1B 00 00      MOV ESI,dword ptr [EDI + ECX*0x4 + 0x1b13]
005928BB  8D 0C 52                  LEA ECX,[EDX + EDX*0x2]
005928BE  8D 14 88                  LEA EDX,[EAX + ECX*0x4]
005928C1  03 CA                     ADD ECX,EDX
005928C3  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005928C6  8B 84 8F 13 1B 00 00      MOV EAX,dword ptr [EDI + ECX*0x4 + 0x1b13]
005928CD  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005928D0  2B CA                     SUB ECX,EDX
005928D2  49                        DEC ECX
005928D3  0F 85 EC 00 00 00         JNZ 0x005929c5
005928D9  83 FB 08                  CMP EBX,0x8
005928DC  77 5B                     JA 0x00592939
switchD_005928de::switchD:
005928DE  FF 24 9D 88 2D 59 00      JMP dword ptr [EBX*0x4 + 0x592d88]
switchD_005928de::caseD_0:
005928E5  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
005928EB  33 D2                     XOR EDX,EDX
005928ED  80 F9 01                  CMP CL,0x1
005928F0  0F 95 C2                  SETNZ DL
005928F3  42                        INC EDX
005928F4  EB 3D                     JMP 0x00592933
switchD_005928de::caseD_3:
005928F6  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
005928FC  33 C0                     XOR EAX,EAX
005928FE  80 FA 02                  CMP DL,0x2
00592901  0F 95 C0                  SETNZ AL
00592904  83 C0 04                  ADD EAX,0x4
00592907  89 87 E8 1B 00 00         MOV dword ptr [EDI + 0x1be8],EAX
0059290D  EB 2A                     JMP 0x00592939
switchD_005928de::caseD_6:
0059290F  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00592915  33 C9                     XOR ECX,ECX
00592917  80 FA 03                  CMP DL,0x3
0059291A  0F 95 C1                  SETNZ CL
0059291D  83 C1 07                  ADD ECX,0x7
00592920  89 8F E8 1B 00 00         MOV dword ptr [EDI + 0x1be8],ECX
00592926  EB 11                     JMP 0x00592939
switchD_005928de::caseD_2:
00592928  33 C0                     XOR EAX,EAX
0059292A  A0 4E 87 80 00            MOV AL,[0x0080874e]
0059292F  8D 54 40 FD               LEA EDX,[EAX + EAX*0x2 + -0x3]
LAB_00592933:
00592933  89 97 E8 1B 00 00         MOV dword ptr [EDI + 0x1be8],EDX
switchD_005928de::default:
00592939  8B 87 E8 1B 00 00         MOV EAX,dword ptr [EDI + 0x1be8]
0059293F  83 F8 08                  CMP EAX,0x8
00592942  77 13                     JA 0x00592957
switchD_00592944::switchD:
00592944  FF 24 85 AC 2D 59 00      JMP dword ptr [EAX*0x4 + 0x592dac]
switchD_00592944::caseD_0:
0059294B  6A 01                     PUSH 0x1
0059294D  B9 58 76 80 00            MOV ECX,0x807658
00592952  E8 45 09 E7 FF            CALL 0x0040329c
switchD_00592944::caseD_1:
00592957  8B 87 E8 1B 00 00         MOV EAX,dword ptr [EDI + 0x1be8]
0059295D  83 F8 08                  CMP EAX,0x8
00592960  77 63                     JA 0x005929c5
switchD_00592962::switchD:
00592962  FF 24 85 D0 2D 59 00      JMP dword ptr [EAX*0x4 + 0x592dd0]
switchD_00592962::caseD_0:
00592969  6A 01                     PUSH 0x1
0059296B  6A 00                     PUSH 0x0
0059296D  6A 15                     PUSH 0x15
0059296F  8B CF                     MOV ECX,EDI
00592971  E8 7B 22 E7 FF            CALL 0x00404bf1
00592976  6A 01                     PUSH 0x1
00592978  6A 02                     PUSH 0x2
0059297A  6A 18                     PUSH 0x18
0059297C  EB 40                     JMP 0x005929be
switchD_00592962::caseD_3:
0059297E  6A 01                     PUSH 0x1
00592980  6A 00                     PUSH 0x0
00592982  6A 16                     PUSH 0x16
00592984  8B CF                     MOV ECX,EDI
00592986  E8 66 22 E7 FF            CALL 0x00404bf1
0059298B  6A 01                     PUSH 0x1
0059298D  6A 02                     PUSH 0x2
0059298F  6A 19                     PUSH 0x19
00592991  EB 2B                     JMP 0x005929be
switchD_00592962::caseD_6:
00592993  6A 01                     PUSH 0x1
00592995  6A 00                     PUSH 0x0
00592997  6A 17                     PUSH 0x17
00592999  8B CF                     MOV ECX,EDI
0059299B  E8 51 22 E7 FF            CALL 0x00404bf1
005929A0  6A 01                     PUSH 0x1
005929A2  6A 02                     PUSH 0x2
005929A4  6A 1A                     PUSH 0x1a
005929A6  EB 16                     JMP 0x005929be
switchD_00592962::caseD_2:
005929A8  6A FF                     PUSH -0x1
005929AA  6A 01                     PUSH 0x1
005929AC  6A 1B                     PUSH 0x1b
005929AE  EB 0E                     JMP 0x005929be
switchD_00592962::caseD_5:
005929B0  6A FF                     PUSH -0x1
005929B2  6A 01                     PUSH 0x1
005929B4  6A 1C                     PUSH 0x1c
005929B6  EB 06                     JMP 0x005929be
switchD_00592962::caseD_8:
005929B8  6A FF                     PUSH -0x1
005929BA  6A 01                     PUSH 0x1
005929BC  6A 1D                     PUSH 0x1d
LAB_005929be:
005929BE  8B CF                     MOV ECX,EDI
005929C0  E8 2C 22 E7 FF            CALL 0x00404bf1
switchD_00592962::caseD_1:
005929C5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005929C8  8B 8F E8 1B 00 00         MOV ECX,dword ptr [EDI + 0x1be8]
005929CE  3B C1                     CMP EAX,ECX
005929D0  0F 84 F9 00 00 00         JZ 0x00592acf
005929D6  8D B7 13 1B 00 00         LEA ESI,[EDI + 0x1b13]
005929DC  C7 45 F4 03 00 00 00      MOV dword ptr [EBP + -0xc],0x3
LAB_005929e3:
005929E3  BB 0F 00 00 00            MOV EBX,0xf
LAB_005929e8:
005929E8  8B 06                     MOV EAX,dword ptr [ESI]
005929EA  85 C0                     TEST EAX,EAX
005929EC  74 06                     JZ 0x005929f4
005929EE  50                        PUSH EAX
005929EF  E8 AC 20 13 00            CALL 0x006c4aa0
LAB_005929f4:
005929F4  83 C6 04                  ADD ESI,0x4
005929F7  4B                        DEC EBX
005929F8  75 EE                     JNZ 0x005929e8
005929FA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005929FD  48                        DEC EAX
005929FE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00592A01  75 E0                     JNZ 0x005929e3
00592A03  8B 87 E8 1B 00 00         MOV EAX,dword ptr [EDI + 0x1be8]
00592A09  B9 08 00 00 00            MOV ECX,0x8
00592A0E  3B C1                     CMP EAX,ECX
00592A10  0F 87 B9 00 00 00         JA 0x00592acf
switchD_00592a16::switchD:
00592A16  FF 24 85 F4 2D 59 00      JMP dword ptr [EAX*0x4 + 0x592df4]
switchD_00592a16::caseD_0:
00592A1D  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
00592A24  C7 45 E4 02 00 00 00      MOV dword ptr [EBP + -0x1c],0x2
00592A2B  C7 45 E8 04 00 00 00      MOV dword ptr [EBP + -0x18],0x4
00592A32  C7 45 EC 03 00 00 00      MOV dword ptr [EBP + -0x14],0x3
00592A39  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
00592A40  E9 8A 00 00 00            JMP 0x00592acf
switchD_00592a16::caseD_1:
00592A45  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
00592A4C  C7 45 E4 05 00 00 00      MOV dword ptr [EBP + -0x1c],0x5
00592A53  C7 45 E8 07 00 00 00      MOV dword ptr [EBP + -0x18],0x7
00592A5A  C7 45 EC 06 00 00 00      MOV dword ptr [EBP + -0x14],0x6
00592A61  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
00592A68  EB 65                     JMP 0x00592acf
switchD_00592a16::caseD_2:
00592A6A  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00592A6D  C7 45 E4 0A 00 00 00      MOV dword ptr [EBP + -0x1c],0xa
00592A74  C7 45 E8 0C 00 00 00      MOV dword ptr [EBP + -0x18],0xc
00592A7B  C7 45 EC 0B 00 00 00      MOV dword ptr [EBP + -0x14],0xb
00592A82  C7 45 F0 09 00 00 00      MOV dword ptr [EBP + -0x10],0x9
00592A89  EB 44                     JMP 0x00592acf
switchD_00592a16::caseD_7:
00592A8B  C7 45 E0 05 00 00 00      MOV dword ptr [EBP + -0x20],0x5
00592A92  C7 45 E4 07 00 00 00      MOV dword ptr [EBP + -0x1c],0x7
00592A99  C7 45 E8 09 00 00 00      MOV dword ptr [EBP + -0x18],0x9
00592AA0  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00592AA3  C7 45 F0 06 00 00 00      MOV dword ptr [EBP + -0x10],0x6
00592AAA  EB 23                     JMP 0x00592acf
switchD_00592a16::caseD_8:
00592AAC  C7 45 E0 0A 00 00 00      MOV dword ptr [EBP + -0x20],0xa
00592AB3  C7 45 E4 0C 00 00 00      MOV dword ptr [EBP + -0x1c],0xc
00592ABA  C7 45 E8 0E 00 00 00      MOV dword ptr [EBP + -0x18],0xe
00592AC1  C7 45 EC 0D 00 00 00      MOV dword ptr [EBP + -0x14],0xd
00592AC8  C7 45 F0 0B 00 00 00      MOV dword ptr [EBP + -0x10],0xb
switchD_00592a16::default:
00592ACF  8D 75 E0                  LEA ESI,[EBP + -0x20]
00592AD2  C7 45 F4 05 00 00 00      MOV dword ptr [EBP + -0xc],0x5
LAB_00592ad9:
00592AD9  8B 97 E8 1B 00 00         MOV EDX,dword ptr [EDI + 0x1be8]
00592ADF  83 FA 08                  CMP EDX,0x8
00592AE2  77 1D                     JA 0x00592b01
00592AE4  33 C9                     XOR ECX,ECX
00592AE6  8A 8A 24 2E 59 00         MOV CL,byte ptr [EDX + 0x592e24]
switchD_00592aec::switchD:
00592AEC  FF 24 8D 18 2E 59 00      JMP dword ptr [ECX*0x4 + 0x592e18]
switchD_00592aec::caseD_3:
00592AF3  B8 01 00 00 00            MOV EAX,0x1
00592AF8  EB 09                     JMP 0x00592b03
switchD_00592aec::caseD_6:
00592AFA  B8 02 00 00 00            MOV EAX,0x2
00592AFF  EB 02                     JMP 0x00592b03
switchD_00592aec::caseD_0:
00592B01  33 C0                     XOR EAX,EAX
LAB_00592b03:
00592B03  8B 0E                     MOV ECX,dword ptr [ESI]
00592B05  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00592B08  8D 1C 81                  LEA EBX,[ECX + EAX*0x4]
00592B0B  03 C3                     ADD EAX,EBX
00592B0D  8B 9C 87 13 1B 00 00      MOV EBX,dword ptr [EDI + EAX*0x4 + 0x1b13]
00592B14  85 DB                     TEST EBX,EBX
00592B16  74 3B                     JZ 0x00592b53
00592B18  83 FA 08                  CMP EDX,0x8
00592B1B  77 1D                     JA 0x00592b3a
00592B1D  33 C0                     XOR EAX,EAX
00592B1F  8A 82 3C 2E 59 00         MOV AL,byte ptr [EDX + 0x592e3c]
switchD_00592b25::switchD:
00592B25  FF 24 85 30 2E 59 00      JMP dword ptr [EAX*0x4 + 0x592e30]
switchD_00592b25::caseD_3:
00592B2C  B8 01 00 00 00            MOV EAX,0x1
00592B31  EB 09                     JMP 0x00592b3c
switchD_00592b25::caseD_6:
00592B33  B8 02 00 00 00            MOV EAX,0x2
00592B38  EB 02                     JMP 0x00592b3c
switchD_00592b25::caseD_0:
00592B3A  33 C0                     XOR EAX,EAX
LAB_00592b3c:
00592B3C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00592B3F  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
00592B42  03 C1                     ADD EAX,ECX
00592B44  8B CF                     MOV ECX,EDI
00592B46  8B 94 87 13 1B 00 00      MOV EDX,dword ptr [EDI + EAX*0x4 + 0x1b13]
00592B4D  52                        PUSH EDX
00592B4E  E8 B6 08 E7 FF            CALL 0x00403409
LAB_00592b53:
00592B53  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00592B56  83 C6 04                  ADD ESI,0x4
00592B59  48                        DEC EAX
00592B5A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00592B5D  0F 85 76 FF FF FF         JNZ 0x00592ad9
00592B63  8B 87 E8 1B 00 00         MOV EAX,dword ptr [EDI + 0x1be8]
00592B69  48                        DEC EAX
00592B6A  74 09                     JZ 0x00592b75
00592B6C  C6 87 E7 1B 00 00 03      MOV byte ptr [EDI + 0x1be7],0x3
00592B73  EB 07                     JMP 0x00592b7c
LAB_00592b75:
00592B75  C6 87 E7 1B 00 00 04      MOV byte ptr [EDI + 0x1be7],0x4
LAB_00592b7c:
00592B7C  FE 8F E7 1B 00 00         DEC byte ptr [EDI + 0x1be7]
LAB_00592b82:
00592B82  C7 45 F4 2E 00 00 00      MOV dword ptr [EBP + -0xc],0x2e
00592B89  C7 45 F8 4C 02 00 00      MOV dword ptr [EBP + -0x8],0x24c
LAB_00592b90:
00592B90  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00592B93  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00592B98  8B 34 01                  MOV ESI,dword ptr [ECX + EAX*0x1]
00592B9B  85 F6                     TEST ESI,ESI
00592B9D  0F 84 05 01 00 00         JZ 0x00592ca8
00592BA3  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00592BA6  8D BC 02 5C 02 00 00      LEA EDI,[EDX + EAX*0x1 + 0x25c]
00592BAD  8A 84 02 70 02 00 00      MOV AL,byte ptr [EDX + EAX*0x1 + 0x270]
00592BB4  84 C0                     TEST AL,AL
00592BB6  74 05                     JZ 0x00592bbd
00592BB8  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00592BBB  EB 03                     JMP 0x00592bc0
LAB_00592bbd:
00592BBD  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
LAB_00592bc0:
00592BC0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00592BC3  8B 5F 10                  MOV EBX,dword ptr [EDI + 0x10]
00592BC6  8B 51 61                  MOV EDX,dword ptr [ECX + 0x61]
00592BC9  2B D3                     SUB EDX,EBX
00592BCB  3B D0                     CMP EDX,EAX
00592BCD  0F 82 D5 00 00 00         JC 0x00592ca8
00592BD3  0F BF 46 29               MOVSX EAX,word ptr [ESI + 0x29]
00592BD7  50                        PUSH EAX
00592BD8  56                        PUSH ESI
00592BD9  E8 C2 87 17 00            CALL 0x0070b3a0
00592BDE  0F BF 4E 2E               MOVSX ECX,word ptr [ESI + 0x2e]
00592BE2  0F BF 56 2C               MOVSX EDX,word ptr [ESI + 0x2c]
00592BE6  83 C4 08                  ADD ESP,0x8
00592BE9  8B D8                     MOV EBX,EAX
00592BEB  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00592BEE  51                        PUSH ECX
00592BEF  8B 0F                     MOV ECX,dword ptr [EDI]
00592BF1  52                        PUSH EDX
00592BF2  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00592BF8  50                        PUSH EAX
00592BF9  51                        PUSH ECX
00592BFA  52                        PUSH EDX
00592BFB  E8 80 33 12 00            CALL 0x006b5f80
00592C00  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00592C03  8B 0F                     MOV ECX,dword ptr [EDI]
00592C05  53                        PUSH EBX
00592C06  6A 01                     PUSH 0x1
00592C08  50                        PUSH EAX
00592C09  51                        PUSH ECX
00592C0A  E8 29 0B E7 FF            CALL 0x00403738
00592C0F  8A 47 14                  MOV AL,byte ptr [EDI + 0x14]
00592C12  83 C4 10                  ADD ESP,0x10
00592C15  84 C0                     TEST AL,AL
00592C17  74 04                     JZ 0x00592c1d
00592C19  C6 47 14 00               MOV byte ptr [EDI + 0x14],0x0
LAB_00592c1d:
00592C1D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00592C20  8B 42 61                  MOV EAX,dword ptr [EDX + 0x61]
00592C23  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
00592C26  0F BF 47 15               MOVSX EAX,word ptr [EDI + 0x15]
00592C2A  83 F8 03                  CMP EAX,0x3
00592C2D  77 79                     JA 0x00592ca8
switchD_00592c2f::switchD:
00592C2F  FF 24 85 48 2E 59 00      JMP dword ptr [EAX*0x4 + 0x592e48]
switchD_00592c2f::caseD_0:
00592C36  66 FF 46 29               INC word ptr [ESI + 0x29]
00592C3A  66 8B 46 29               MOV AX,word ptr [ESI + 0x29]
00592C3E  66 3B 46 23               CMP AX,word ptr [ESI + 0x23]
00592C42  7C 64                     JL 0x00592ca8
00592C44  66 C7 46 29 00 00         MOV word ptr [ESI + 0x29],0x0
00592C4A  C6 47 14 01               MOV byte ptr [EDI + 0x14],0x1
00592C4E  EB 58                     JMP 0x00592ca8
switchD_00592c2f::caseD_2:
00592C50  66 FF 46 29               INC word ptr [ESI + 0x29]
00592C54  66 8B 4E 29               MOV CX,word ptr [ESI + 0x29]
00592C58  66 8B 46 23               MOV AX,word ptr [ESI + 0x23]
00592C5C  66 3B C8                  CMP CX,AX
00592C5F  7C 47                     JL 0x00592ca8
00592C61  48                        DEC EAX
00592C62  66 89 46 29               MOV word ptr [ESI + 0x29],AX
00592C66  C6 47 14 01               MOV byte ptr [EDI + 0x14],0x1
00592C6A  66 C7 47 15 03 00         MOV word ptr [EDI + 0x15],0x3
00592C70  EB 36                     JMP 0x00592ca8
switchD_00592c2f::caseD_1:
00592C72  66 FF 4E 29               DEC word ptr [ESI + 0x29]
00592C76  66 83 7E 29 00            CMP word ptr [ESI + 0x29],0x0
00592C7B  7D 2B                     JGE 0x00592ca8
00592C7D  66 8B 4E 23               MOV CX,word ptr [ESI + 0x23]
00592C81  66 49                     DEC CX
00592C83  66 89 4E 29               MOV word ptr [ESI + 0x29],CX
00592C87  C6 47 14 01               MOV byte ptr [EDI + 0x14],0x1
00592C8B  EB 1B                     JMP 0x00592ca8
switchD_00592c2f::caseD_3:
00592C8D  66 FF 4E 29               DEC word ptr [ESI + 0x29]
00592C91  66 83 7E 29 00            CMP word ptr [ESI + 0x29],0x0
00592C96  7D 10                     JGE 0x00592ca8
00592C98  66 C7 46 29 00 00         MOV word ptr [ESI + 0x29],0x0
00592C9E  C6 47 14 01               MOV byte ptr [EDI + 0x14],0x1
00592CA2  66 C7 47 15 02 00         MOV word ptr [EDI + 0x15],0x2
switchD_00592c2f::default:
00592CA8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00592CAB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00592CAE  83 C0 04                  ADD EAX,0x4
00592CB1  83 C2 17                  ADD EDX,0x17
00592CB4  3D 5C 02 00 00            CMP EAX,0x25c
00592CB9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00592CBC  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00592CBF  0F 8C CB FE FF FF         JL 0x00592b90
00592CC5  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00592CC8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00592CCE  5F                        POP EDI
00592CCF  5E                        POP ESI
00592CD0  5B                        POP EBX
00592CD1  8B E5                     MOV ESP,EBP
00592CD3  5D                        POP EBP
00592CD4  C3                        RET
LAB_00592cd5:
00592CD5  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00592CD8  68 7C BE 7C 00            PUSH 0x7cbe7c
00592CDD  68 CC 4C 7A 00            PUSH 0x7a4ccc
00592CE2  56                        PUSH ESI
00592CE3  6A 00                     PUSH 0x0
00592CE5  68 B3 01 00 00            PUSH 0x1b3
00592CEA  68 D4 BC 7C 00            PUSH 0x7cbcd4
00592CEF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00592CF4  E8 D7 A7 11 00            CALL 0x006ad4d0
00592CF9  83 C4 18                  ADD ESP,0x18
00592CFC  85 C0                     TEST EAX,EAX
00592CFE  74 01                     JZ 0x00592d01
00592D00  CC                        INT3
LAB_00592d01:
00592D01  68 B3 01 00 00            PUSH 0x1b3
00592D06  68 D4 BC 7C 00            PUSH 0x7cbcd4
00592D0B  6A 00                     PUSH 0x0
00592D0D  56                        PUSH ESI
00592D0E  E8 2D 31 11 00            CALL 0x006a5e40
00592D13  5F                        POP EDI
00592D14  5E                        POP ESI
00592D15  5B                        POP EBX
00592D16  8B E5                     MOV ESP,EBP
00592D18  5D                        POP EBP
00592D19  C3                        RET
