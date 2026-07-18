FUN_00488890:
00488890  55                        PUSH EBP
00488891  8B EC                     MOV EBP,ESP
00488893  83 EC 78                  SUB ESP,0x78
00488896  53                        PUSH EBX
00488897  56                        PUSH ESI
00488898  57                        PUSH EDI
00488899  33 FF                     XOR EDI,EDI
0048889B  8B F1                     MOV ESI,ECX
0048889D  33 DB                     XOR EBX,EBX
0048889F  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
004888A2  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
004888A5  EB 02                     JMP 0x004888a9
LAB_004888a7:
004888A7  33 FF                     XOR EDI,EDI
LAB_004888a9:
004888A9  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004888AC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004888B2  50                        PUSH EAX
004888B3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004888B6  E8 FC C0 F7 FF            CALL 0x004049b7
004888BB  25 FF 00 00 00            AND EAX,0xff
004888C0  C1 E0 04                  SHL EAX,0x4
004888C3  83 FB 04                  CMP EBX,0x4
004888C6  8D 88 A0 0F 80 00         LEA ECX,[EAX + 0x800fa0]
004888CC  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004888CF  77 4E                     JA 0x0048891f
switchD_004888d1::switchD:
004888D1  FF 24 9D 08 8C 48 00      JMP dword ptr [EBX*0x4 + 0x488c08]
switchD_004888d1::caseD_0:
004888D8  C7 45 FC A0 14 80 00      MOV dword ptr [EBP + -0x4],0x8014a0
004888DF  EB 3E                     JMP 0x0048891f
switchD_004888d1::caseD_1:
004888E1  C7 45 FC 90 0F 80 00      MOV dword ptr [EBP + -0x4],0x800f90
004888E8  EB 35                     JMP 0x0048891f
switchD_004888d1::caseD_2:
004888EA  C7 45 FC 80 0F 80 00      MOV dword ptr [EBP + -0x4],0x800f80
004888F1  EB 2C                     JMP 0x0048891f
switchD_004888d1::caseD_3:
004888F3  C7 45 FC 60 13 80 00      MOV dword ptr [EBP + -0x4],0x801360
004888FA  EB 23                     JMP 0x0048891f
switchD_004888d1::caseD_4:
004888FC  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004888FF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488905  52                        PUSH EDX
00488906  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00488909  E8 A9 C0 F7 FF            CALL 0x004049b7
0048890E  25 FF 00 00 00            AND EAX,0xff
00488913  C1 E0 04                  SHL EAX,0x4
00488916  8D 80 70 13 80 00         LEA EAX,[EAX + 0x801370]
0048891C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
switchD_004888d1::default:
0048891F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00488922  83 3C 9F 00               CMP dword ptr [EDI + EBX*0x4],0x0
00488926  75 10                     JNZ 0x00488938
00488928  6A 05                     PUSH 0x5
0048892A  6A 30                     PUSH 0x30
0048892C  6A 05                     PUSH 0x5
0048892E  6A 00                     PUSH 0x0
00488930  E8 5B 59 22 00            CALL 0x006ae290
00488935  89 04 9F                  MOV dword ptr [EDI + EBX*0x4],EAX
LAB_00488938:
00488938  BF 32 00 00 00            MOV EDI,0x32
0048893D  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00488944  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_00488947:
00488947  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0048894A  85 C0                     TEST EAX,EAX
0048894C  74 17                     JZ 0x00488965
0048894E  8D 4F CE                  LEA ECX,[EDI + -0x32]
00488951  6A FF                     PUSH -0x1
00488953  51                        PUSH ECX
00488954  50                        PUSH EAX
00488955  E8 76 86 22 00            CALL 0x006b0fd0
0048895A  83 C4 0C                  ADD ESP,0xc
0048895D  85 C0                     TEST EAX,EAX
0048895F  0F 84 8C 01 00 00         JZ 0x00488af1
LAB_00488965:
00488965  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00488968  8D 47 CE                  LEA EAX,[EDI + -0x32]
0048896B  6A FF                     PUSH -0x1
0048896D  50                        PUSH EAX
0048896E  52                        PUSH EDX
0048896F  E8 5C 86 22 00            CALL 0x006b0fd0
00488974  83 C4 0C                  ADD ESP,0xc
00488977  85 C0                     TEST EAX,EAX
00488979  0F 84 72 01 00 00         JZ 0x00488af1
0048897F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488985  8D 47 CE                  LEA EAX,[EDI + -0x32]
00488988  50                        PUSH EAX
00488989  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0048898C  50                        PUSH EAX
0048898D  E8 8B CD F7 FF            CALL 0x0040571d
00488992  85 C0                     TEST EAX,EAX
00488994  0F 84 57 01 00 00         JZ 0x00488af1
0048899A  83 FF 54                  CMP EDI,0x54
0048899D  7C 09                     JL 0x004889a8
0048899F  83 FF 5A                  CMP EDI,0x5a
004889A2  0F 8E 49 01 00 00         JLE 0x00488af1
LAB_004889a8:
004889A8  B9 0C 00 00 00            MOV ECX,0xc
004889AD  33 C0                     XOR EAX,EAX
004889AF  8D 7D B8                  LEA EDI,[EBP + -0x48]
004889B2  F3 AB                     STOSD.REP ES:EDI
004889B4  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004889B7  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004889BA  57                        PUSH EDI
004889BB  51                        PUSH ECX
004889BC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004889C2  89 7D B8                  MOV dword ptr [EBP + -0x48],EDI
004889C5  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
004889C8  E8 CF BC F7 FF            CALL 0x0040469c
004889CD  85 C0                     TEST EAX,EAX
004889CF  74 3A                     JZ 0x00488a0b
004889D1  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004889D4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004889DA  52                        PUSH EDX
004889DB  E8 D7 BF F7 FF            CALL 0x004049b7
004889E0  3C 03                     CMP AL,0x3
004889E2  75 21                     JNZ 0x00488a05
004889E4  83 FF 5C                  CMP EDI,0x5c
004889E7  74 1C                     JZ 0x00488a05
004889E9  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004889EC  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004889EF  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004889F2  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004889F5  C1 E1 04                  SHL ECX,0x4
004889F8  03 C8                     ADD ECX,EAX
004889FA  8B 04 4D EA 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f57ea]
00488A01  85 C0                     TEST EAX,EAX
00488A03  74 06                     JZ 0x00488a0b
LAB_00488a05:
00488A05  C6 45 C0 01               MOV byte ptr [EBP + -0x40],0x1
00488A09  EB 04                     JMP 0x00488a0f
LAB_00488a0b:
00488A0B  C6 45 C0 00               MOV byte ptr [EBP + -0x40],0x0
LAB_00488a0f:
00488A0F  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00488A12  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488A18  52                        PUSH EDX
00488A19  E8 99 BF F7 FF            CALL 0x004049b7
00488A1E  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00488A21  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00488A24  25 FF 00 00 00            AND EAX,0xff
00488A29  51                        PUSH ECX
00488A2A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488A30  03 C7                     ADD EAX,EDI
00488A32  66 8B 04 85 A8 45 85 00   MOV AX,word ptr [EAX*0x4 + 0x8545a8]
00488A3A  66 89 45 C6               MOV word ptr [EBP + -0x3a],AX
00488A3E  E8 74 BF F7 FF            CALL 0x004049b7
00488A43  25 FF 00 00 00            AND EAX,0xff
00488A48  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488A4E  03 C7                     ADD EAX,EDI
00488A50  66 8B 14 85 4C 1C 7E 00   MOV DX,word ptr [EAX*0x4 + 0x7e1c4c]
00488A58  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00488A5B  50                        PUSH EAX
00488A5C  66 89 55 C2               MOV word ptr [EBP + -0x3e],DX
00488A60  E8 52 BF F7 FF            CALL 0x004049b7
00488A65  3C 03                     CMP AL,0x3
00488A67  75 24                     JNZ 0x00488a8d
00488A69  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00488A6C  51                        PUSH ECX
00488A6D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488A73  E8 3F BF F7 FF            CALL 0x004049b7
00488A78  25 FF 00 00 00            AND EAX,0xff
00488A7D  03 C7                     ADD EAX,EDI
00488A7F  66 8B 14 85 5C 31 7E 00   MOV DX,word ptr [EAX*0x4 + 0x7e315c]
00488A87  66 89 55 C4               MOV word ptr [EBP + -0x3c],DX
00488A8B  EB 22                     JMP 0x00488aaf
LAB_00488a8d:
00488A8D  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00488A90  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488A96  50                        PUSH EAX
00488A97  E8 1B BF F7 FF            CALL 0x004049b7
00488A9C  25 FF 00 00 00            AND EAX,0xff
00488AA1  03 C7                     ADD EAX,EDI
00488AA3  66 8B 0C 85 F8 24 7E 00   MOV CX,word ptr [EAX*0x4 + 0x7e24f8]
00488AAB  66 89 4D C4               MOV word ptr [EBP + -0x3c],CX
LAB_00488aaf:
00488AAF  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00488AB2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488AB8  52                        PUSH EDX
00488AB9  66 C7 45 C8 FF FF         MOV word ptr [EBP + -0x38],0xffff
00488ABF  E8 F3 BE F7 FF            CALL 0x004049b7
00488AC4  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00488AC7  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00488ACA  88 45 C1                  MOV byte ptr [EBP + -0x3f],AL
00488ACD  8D 45 CA                  LEA EAX,[EBP + -0x36]
00488AD0  50                        PUSH EAX
00488AD1  51                        PUSH ECX
00488AD2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488AD8  52                        PUSH EDX
00488AD9  E8 73 CA F7 FF            CALL 0x00405551
00488ADE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00488AE1  8D 45 B8                  LEA EAX,[EBP + -0x48]
00488AE4  50                        PUSH EAX
00488AE5  8B 14 99                  MOV EDX,dword ptr [ECX + EBX*0x4]
00488AE8  52                        PUSH EDX
00488AE9  E8 D2 56 22 00            CALL 0x006ae1c0
00488AEE  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_00488af1:
00488AF1  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00488AF4  47                        INC EDI
00488AF5  83 C2 03                  ADD EDX,0x3
00488AF8  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00488AFB  8D 47 CE                  LEA EAX,[EDI + -0x32]
00488AFE  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00488B01  83 F8 42                  CMP EAX,0x42
00488B04  0F 8C 3D FE FF FF         JL 0x00488947
00488B0A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00488B0D  8B 0C 99                  MOV ECX,dword ptr [ECX + EBX*0x4]
00488B10  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00488B13  85 C0                     TEST EAX,EAX
00488B15  0F 84 D7 00 00 00         JZ 0x00488bf2
LAB_00488b1b:
00488B1B  83 C0 FE                  ADD EAX,-0x2
00488B1E  33 FF                     XOR EDI,EDI
00488B20  85 C0                     TEST EAX,EAX
00488B22  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00488B25  0F 8C C7 00 00 00         JL 0x00488bf2
LAB_00488b2b:
00488B2B  8D 55 B8                  LEA EDX,[EBP + -0x48]
00488B2E  52                        PUSH EDX
00488B2F  8B D7                     MOV EDX,EDI
00488B31  E8 3A 41 22 00            CALL 0x006acc70
00488B36  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00488B39  8D 77 01                  LEA ESI,[EDI + 0x1]
00488B3C  8D 45 88                  LEA EAX,[EBP + -0x78]
00488B3F  8B D6                     MOV EDX,ESI
00488B41  8B 0C 99                  MOV ECX,dword ptr [ECX + EBX*0x4]
00488B44  50                        PUSH EAX
00488B45  E8 26 41 22 00            CALL 0x006acc70
00488B4A  8A 45 C0                  MOV AL,byte ptr [EBP + -0x40]
00488B4D  84 C0                     TEST AL,AL
00488B4F  75 09                     JNZ 0x00488b5a
00488B51  8A 45 90                  MOV AL,byte ptr [EBP + -0x70]
00488B54  84 C0                     TEST AL,AL
00488B56  75 61                     JNZ 0x00488bb9
00488B58  EB 05                     JMP 0x00488b5f
LAB_00488b5a:
00488B5A  3A 45 90                  CMP AL,byte ptr [EBP + -0x70]
00488B5D  75 6F                     JNZ 0x00488bce
LAB_00488b5f:
00488B5F  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00488B62  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488B68  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
00488B6B  52                        PUSH EDX
00488B6C  E8 46 BE F7 FF            CALL 0x004049b7
00488B71  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
00488B74  8A D0                     MOV DL,AL
00488B76  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00488B79  81 E2 FF 00 00 00         AND EDX,0xff
00488B7F  51                        PUSH ECX
00488B80  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488B86  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00488B89  03 D0                     ADD EDX,EAX
00488B8B  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00488B8E  E8 24 BE F7 FF            CALL 0x004049b7
00488B93  8A D0                     MOV DL,AL
00488B95  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00488B98  81 E2 FF 00 00 00         AND EDX,0xff
00488B9E  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
00488BA1  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00488BA4  03 D0                     ADD EDX,EAX
00488BA6  8B 0C 95 AC 1D 7E 00      MOV ECX,dword ptr [EDX*0x4 + 0x7e1dac]
00488BAD  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00488BB0  3B 0C 95 AC 1D 7E 00      CMP ECX,dword ptr [EDX*0x4 + 0x7e1dac]
00488BB7  7D 15                     JGE 0x00488bce
LAB_00488bb9:
00488BB9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00488BBC  56                        PUSH ESI
00488BBD  57                        PUSH EDI
00488BBE  8B 0C 98                  MOV ECX,dword ptr [EAX + EBX*0x4]
00488BC1  51                        PUSH ECX
00488BC2  E8 09 81 22 00            CALL 0x006b0cd0
00488BC7  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
LAB_00488bce:
00488BCE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00488BD1  8B FE                     MOV EDI,ESI
00488BD3  8B 0C 9A                  MOV ECX,dword ptr [EDX + EBX*0x4]
00488BD6  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00488BD9  8D 50 FE                  LEA EDX,[EAX + -0x2]
00488BDC  3B FA                     CMP EDI,EDX
00488BDE  0F 8E 47 FF FF FF         JLE 0x00488b2b
00488BE4  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00488BE7  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00488BEA  85 D2                     TEST EDX,EDX
00488BEC  0F 85 29 FF FF FF         JNZ 0x00488b1b
LAB_00488bf2:
00488BF2  43                        INC EBX
00488BF3  83 FB 05                  CMP EBX,0x5
00488BF6  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00488BF9  0F 8C A8 FC FF FF         JL 0x004888a7
00488BFF  5F                        POP EDI
00488C00  5E                        POP ESI
00488C01  5B                        POP EBX
00488C02  8B E5                     MOV ESP,EBP
00488C04  5D                        POP EBP
00488C05  C2 04 00                  RET 0x4
