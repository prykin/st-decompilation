SettMapMTy::SetListCtrls:
005CCE10  55                        PUSH EBP
005CCE11  8B EC                     MOV EBP,ESP
005CCE13  81 EC 48 01 00 00         SUB ESP,0x148
005CCE19  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005CCE1E  53                        PUSH EBX
005CCE1F  56                        PUSH ESI
005CCE20  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005CCE23  33 DB                     XOR EBX,EBX
005CCE25  57                        PUSH EDI
005CCE26  8D 55 88                  LEA EDX,[EBP + -0x78]
005CCE29  8D 4D 84                  LEA ECX,[EBP + -0x7c]
005CCE2C  53                        PUSH EBX
005CCE2D  52                        PUSH EDX
005CCE2E  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
005CCE31  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
005CCE34  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CCE3A  E8 B1 09 16 00            CALL 0x0072d7f0
005CCE3F  8B F0                     MOV ESI,EAX
005CCE41  83 C4 08                  ADD ESP,0x8
005CCE44  3B F3                     CMP ESI,EBX
005CCE46  0F 85 1F 04 00 00         JNZ 0x005cd26b
005CCE4C  B9 08 00 00 00            MOV ECX,0x8
005CCE51  33 C0                     XOR EAX,EAX
005CCE53  8D 7D C8                  LEA EDI,[EBP + -0x38]
005CCE56  8D 95 44 FF FF FF         LEA EDX,[EBP + 0xffffff44]
005CCE5C  F3 AB                     STOSD.REP ES:EDI
005CCE5E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005CCE63  8D 8D 40 FF FF FF         LEA ECX,[EBP + 0xffffff40]
005CCE69  53                        PUSH EBX
005CCE6A  52                        PUSH EDX
005CCE6B  C7 45 D8 26 00 00 00      MOV dword ptr [EBP + -0x28],0x26
005CCE72  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
005CCE78  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CCE7E  E8 6D 09 16 00            CALL 0x0072d7f0
005CCE83  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
005CCE86  83 C4 08                  ADD ESP,0x8
005CCE89  3B C3                     CMP EAX,EBX
005CCE8B  75 27                     JNZ 0x005cceb4
005CCE8D  8B 8F 1D 21 00 00         MOV ECX,dword ptr [EDI + 0x211d]
005CCE93  8D 45 C8                  LEA EAX,[EBP + -0x38]
005CCE96  50                        PUSH EAX
005CCE97  51                        PUSH ECX
005CCE98  6A 02                     PUSH 0x2
005CCE9A  8B CF                     MOV ECX,EDI
005CCE9C  E8 DF 91 11 00            CALL 0x006e6080
005CCEA1  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
005CCEA4  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
005CCEAA  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
005CCEAD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005CCEB2  EB 0C                     JMP 0x005ccec0
LAB_005cceb4:
005CCEB4  8B 8D 40 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff40]
005CCEBA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_005ccec0:
005CCEC0  8A 87 26 1E 00 00         MOV AL,byte ptr [EDI + 0x1e26]
005CCEC6  3C 05                     CMP AL,0x5
005CCEC8  74 0F                     JZ 0x005cced9
005CCECA  3C 0F                     CMP AL,0xf
005CCECC  74 0B                     JZ 0x005cced9
005CCECE  8B 97 43 1F 00 00         MOV EDX,dword ptr [EDI + 0x1f43]
005CCED4  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005CCED7  EB 09                     JMP 0x005ccee2
LAB_005cced9:
005CCED9  8B 87 3F 1F 00 00         MOV EAX,dword ptr [EDI + 0x1f3f]
005CCEDF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_005ccee2:
005CCEE2  B9 E3 07 00 00            MOV ECX,0x7e3
005CCEE7  C7 47 29 02 00 00 00      MOV dword ptr [EDI + 0x29],0x2
005CCEEE  C7 47 2D 20 00 00 00      MOV dword ptr [EDI + 0x2d],0x20
005CCEF5  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
005CCEF8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_005ccefb:
005CCEFB  33 C0                     XOR EAX,EAX
005CCEFD  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_005ccf00:
005CCF00  8D 14 01                  LEA EDX,[ECX + EAX*0x1]
005CCF03  39 1C 97                  CMP dword ptr [EDI + EDX*0x4],EBX
005CCF06  0F 84 4F 02 00 00         JZ 0x005cd15b
005CCF0C  8B 87 84 1F 00 00         MOV EAX,dword ptr [EDI + 0x1f84]
005CCF12  3B C3                     CMP EAX,EBX
005CCF14  74 1D                     JZ 0x005ccf33
005CCF16  8B 8F 88 1F 00 00         MOV ECX,dword ptr [EDI + 0x1f88]
005CCF1C  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005CCF1F  03 CE                     ADD ECX,ESI
005CCF21  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
005CCF24  3B CE                     CMP ECX,ESI
005CCF26  73 0B                     JNC 0x005ccf33
005CCF28  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005CCF2B  0F AF F1                  IMUL ESI,ECX
005CCF2E  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
005CCF31  EB 02                     JMP 0x005ccf35
LAB_005ccf33:
005CCF33  33 F6                     XOR ESI,ESI
LAB_005ccf35:
005CCF35  8A 87 26 1E 00 00         MOV AL,byte ptr [EDI + 0x1e26]
005CCF3B  8B 14 97                  MOV EDX,dword ptr [EDI + EDX*0x4]
005CCF3E  3C 0C                     CMP AL,0xc
005CCF40  89 57 25                  MOV dword ptr [EDI + 0x25],EDX
005CCF43  89 5F 31                  MOV dword ptr [EDI + 0x31],EBX
005CCF46  0F 84 FD 01 00 00         JZ 0x005cd149
005CCF4C  3C 10                     CMP AL,0x10
005CCF4E  0F 84 F5 01 00 00         JZ 0x005cd149
005CCF54  3B F3                     CMP ESI,EBX
005CCF56  0F 84 ED 01 00 00         JZ 0x005cd149
005CCF5C  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005CCF5F  83 F9 07                  CMP ECX,0x7
005CCF62  0F 87 E1 01 00 00         JA 0x005cd149
switchD_005ccf68::switchD:
005CCF68  FF 24 8D B0 D2 5C 00      JMP dword ptr [ECX*0x4 + 0x5cd2b0]
switchD_005ccf68::caseD_0:
005CCF6F  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
005CCF72  3B C3                     CMP EAX,EBX
005CCF74  74 06                     JZ 0x005ccf7c
005CCF76  50                        PUSH EAX
005CCF77  E8 94 11 0E 00            CALL 0x006ae110
LAB_005ccf7c:
005CCF7C  33 C0                     XOR EAX,EAX
005CCF7E  89 5E 50                  MOV dword ptr [ESI + 0x50],EBX
005CCF81  8A 87 26 1E 00 00         MOV AL,byte ptr [EDI + 0x1e26]
005CCF87  83 C0 FB                  ADD EAX,-0x5
005CCF8A  83 F8 0B                  CMP EAX,0xb
005CCF8D  77 35                     JA 0x005ccfc4
005CCF8F  33 C9                     XOR ECX,ECX
005CCF91  8A 88 DC D2 5C 00         MOV CL,byte ptr [EAX + 0x5cd2dc]
switchD_005ccf97::switchD:
005CCF97  FF 24 8D D0 D2 5C 00      JMP dword ptr [ECX*0x4 + 0x5cd2d0]
switchD_005ccf97::caseD_5:
005CCF9E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005CCFA1  33 D2                     XOR EDX,EDX
005CCFA3  8A 56 02                  MOV DL,byte ptr [ESI + 0x2]
005CCFA6  6A FF                     PUSH -0x1
005CCFA8  52                        PUSH EDX
005CCFA9  50                        PUSH EAX
005CCFAA  E8 BB 76 E3 FF            CALL 0x0040466a
005CCFAF  EB 28                     JMP 0x005ccfd9
switchD_005ccf97::caseD_c:
005CCFB1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005CCFB4  33 C9                     XOR ECX,ECX
005CCFB6  8A 4E 02                  MOV CL,byte ptr [ESI + 0x2]
005CCFB9  6A FF                     PUSH -0x1
005CCFBB  51                        PUSH ECX
005CCFBC  52                        PUSH EDX
005CCFBD  E8 F9 4D E3 FF            CALL 0x00401dbb
005CCFC2  EB 15                     JMP 0x005ccfd9
switchD_005ccf97::caseD_6:
005CCFC4  A1 5C 99 80 00            MOV EAX,[0x0080995c]
005CCFC9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005CCFCC  33 C9                     XOR ECX,ECX
005CCFCE  50                        PUSH EAX
005CCFCF  8A 4E 03                  MOV CL,byte ptr [ESI + 0x3]
005CCFD2  51                        PUSH ECX
005CCFD3  52                        PUSH EDX
005CCFD4  E8 6B 6F E3 FF            CALL 0x00403f44
LAB_005ccfd9:
005CCFD9  33 C9                     XOR ECX,ECX
005CCFDB  89 46 50                  MOV dword ptr [ESI + 0x50],EAX
005CCFDE  8A 4E 05                  MOV CL,byte ptr [ESI + 0x5]
005CCFE1  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
005CCFE4  83 C4 0C                  ADD ESP,0xc
005CCFE7  3B CA                     CMP ECX,EDX
005CCFE9  72 03                     JC 0x005ccfee
005CCFEB  88 56 05                  MOV byte ptr [ESI + 0x5],DL
LAB_005ccfee:
005CCFEE  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
005CCFF1  39 58 0C                  CMP dword ptr [EAX + 0xc],EBX
005CCFF4  75 0A                     JNZ 0x005cd000
005CCFF6  80 7E 04 04               CMP byte ptr [ESI + 0x4],0x4
005CCFFA  75 04                     JNZ 0x005cd000
005CCFFC  C6 46 04 01               MOV byte ptr [ESI + 0x4],0x1
LAB_005cd000:
005CD000  38 1E                     CMP byte ptr [ESI],BL
005CD002  0F 84 41 01 00 00         JZ 0x005cd149
005CD008  8A 87 26 1E 00 00         MOV AL,byte ptr [EDI + 0x1e26]
005CD00E  3C 05                     CMP AL,0x5
005CD010  0F 84 33 01 00 00         JZ 0x005cd149
005CD016  3C 0F                     CMP AL,0xf
005CD018  0F 84 2B 01 00 00         JZ 0x005cd149
005CD01E  80 7E 04 02               CMP byte ptr [ESI + 0x4],0x2
005CD022  0F 85 21 01 00 00         JNZ 0x005cd149
005CD028  8B 4E 06                  MOV ECX,dword ptr [ESI + 0x6]
005CD02B  A1 7F 87 80 00            MOV EAX,[0x0080877f]
005CD030  3B C8                     CMP ECX,EAX
005CD032  E9 E2 00 00 00            JMP 0x005cd119
switchD_005ccf68::caseD_1:
005CD037  3C 05                     CMP AL,0x5
005CD039  0F 84 0A 01 00 00         JZ 0x005cd149
005CD03F  3C 0F                     CMP AL,0xf
005CD041  0F 84 02 01 00 00         JZ 0x005cd149
005CD047  38 1E                     CMP byte ptr [ESI],BL
005CD049  0F 84 FA 00 00 00         JZ 0x005cd149
005CD04F  A0 7E 87 80 00            MOV AL,[0x0080877e]
005CD054  3A C3                     CMP AL,BL
005CD056  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
005CD059  74 0D                     JZ 0x005cd068
005CD05B  3C 02                     CMP AL,0x2
005CD05D  0F 85 DF 00 00 00         JNZ 0x005cd142
005CD063  E9 A7 00 00 00            JMP 0x005cd10f
LAB_005cd068:
005CD068  3C 02                     CMP AL,0x2
005CD06A  0F 85 D9 00 00 00         JNZ 0x005cd149
005CD070  8B 46 06                  MOV EAX,dword ptr [ESI + 0x6]
005CD073  8B 0D 7F 87 80 00         MOV ECX,dword ptr [0x0080877f]
005CD079  3B C1                     CMP EAX,ECX
005CD07B  0F 85 C8 00 00 00         JNZ 0x005cd149
005CD081  E9 BC 00 00 00            JMP 0x005cd142
switchD_005ccf68::caseD_3:
005CD086  38 1D 7E 87 80 00         CMP byte ptr [0x0080877e],BL
005CD08C  0F 85 B0 00 00 00         JNZ 0x005cd142
005CD092  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
005CD095  3C 01                     CMP AL,0x1
005CD097  0F 84 A5 00 00 00         JZ 0x005cd142
005CD09D  8B 0D 7F 87 80 00         MOV ECX,dword ptr [0x0080877f]
005CD0A3  3C 02                     CMP AL,0x2
005CD0A5  75 09                     JNZ 0x005cd0b0
005CD0A7  39 4E 06                  CMP dword ptr [ESI + 0x6],ECX
005CD0AA  0F 84 92 00 00 00         JZ 0x005cd142
LAB_005cd0b0:
005CD0B0  3C 03                     CMP AL,0x3
005CD0B2  0F 85 91 00 00 00         JNZ 0x005cd149
005CD0B8  39 4E 06                  CMP dword ptr [ESI + 0x6],ECX
005CD0BB  0F 85 88 00 00 00         JNZ 0x005cd149
005CD0C1  EB 7F                     JMP 0x005cd142
switchD_005ccf68::caseD_5:
005CD0C3  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
005CD0CA  74 7D                     JZ 0x005cd149
005CD0CC  3C 05                     CMP AL,0x5
005CD0CE  74 79                     JZ 0x005cd149
005CD0D0  3C 0F                     CMP AL,0xf
005CD0D2  74 75                     JZ 0x005cd149
005CD0D4  38 1E                     CMP byte ptr [ESI],BL
005CD0D6  74 71                     JZ 0x005cd149
005CD0D8  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
005CD0DB  3A C3                     CMP AL,BL
005CD0DD  74 6A                     JZ 0x005cd149
005CD0DF  3C 01                     CMP AL,0x1
005CD0E1  74 66                     JZ 0x005cd149
005CD0E3  80 7E 02 FF               CMP byte ptr [ESI + 0x2],0xff
005CD0E7  74 60                     JZ 0x005cd149
005CD0E9  38 1D 8F 8A 80 00         CMP byte ptr [0x00808a8f],BL
005CD0EF  74 2C                     JZ 0x005cd11d
005CD0F1  38 1D 7E 87 80 00         CMP byte ptr [0x0080877e],BL
005CD0F7  74 12                     JZ 0x005cd10b
005CD0F9  3C 02                     CMP AL,0x2
005CD0FB  75 45                     JNZ 0x005cd142
005CD0FD  8B 4E 06                  MOV ECX,dword ptr [ESI + 0x6]
005CD100  A1 7F 87 80 00            MOV EAX,[0x0080877f]
005CD105  3B C8                     CMP ECX,EAX
005CD107  75 40                     JNZ 0x005cd149
005CD109  EB 37                     JMP 0x005cd142
LAB_005cd10b:
005CD10B  3C 02                     CMP AL,0x2
005CD10D  75 3A                     JNZ 0x005cd149
LAB_005cd10f:
005CD10F  8B 56 06                  MOV EDX,dword ptr [ESI + 0x6]
005CD112  A1 7F 87 80 00            MOV EAX,[0x0080877f]
005CD117  3B D0                     CMP EDX,EAX
LAB_005cd119:
005CD119  75 2E                     JNZ 0x005cd149
005CD11B  EB 25                     JMP 0x005cd142
LAB_005cd11d:
005CD11D  3C 02                     CMP AL,0x2
005CD11F  75 21                     JNZ 0x005cd142
005CD121  8B 46 06                  MOV EAX,dword ptr [ESI + 0x6]
005CD124  8B 0D 7F 87 80 00         MOV ECX,dword ptr [0x0080877f]
005CD12A  3B C1                     CMP EAX,ECX
005CD12C  74 1B                     JZ 0x005cd149
005CD12E  EB 12                     JMP 0x005cd142
switchD_005ccf68::caseD_7:
005CD130  80 7E 04 02               CMP byte ptr [ESI + 0x4],0x2
005CD134  75 13                     JNZ 0x005cd149
005CD136  8B 4E 06                  MOV ECX,dword ptr [ESI + 0x6]
005CD139  A1 7F 87 80 00            MOV EAX,[0x0080877f]
005CD13E  3B C8                     CMP ECX,EAX
005CD140  75 07                     JNZ 0x005cd149
SettMapMTy::SetListCtrls::cf_common_join_005CD142:
005CD142  C7 47 31 01 00 00 00      MOV dword ptr [EDI + 0x31],0x1
switchD_005ccf68::caseD_4:
005CD149  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
005CD14C  8D 47 1D                  LEA EAX,[EDI + 0x1d]
005CD14F  50                        PUSH EAX
005CD150  8B 11                     MOV EDX,dword ptr [ECX]
005CD152  FF 52 18                  CALL dword ptr [EDX + 0x18]
005CD155  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005CD158  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_005cd15b:
005CD15B  40                        INC EAX
005CD15C  83 F8 08                  CMP EAX,0x8
005CD15F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005CD162  0F 8C 98 FD FF FF         JL 0x005ccf00
005CD168  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005CD16B  83 C1 08                  ADD ECX,0x8
005CD16E  46                        INC ESI
005CD16F  81 F9 33 08 00 00         CMP ECX,0x833
005CD175  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005CD178  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005CD17B  0F 8C 7A FD FF FF         JL 0x005ccefb
005CD181  8B BF 84 1F 00 00         MOV EDI,dword ptr [EDI + 0x1f84]
005CD187  3B FB                     CMP EDI,EBX
005CD189  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
005CD18C  C7 45 D8 28 00 00 00      MOV dword ptr [EBP + -0x28],0x28
005CD193  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005CD196  74 0D                     JZ 0x005cd1a5
005CD198  83 F8 0A                  CMP EAX,0xa
005CD19B  76 08                     JBE 0x005cd1a5
005CD19D  83 C0 F7                  ADD EAX,-0x9
005CD1A0  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
005CD1A3  EB 07                     JMP 0x005cd1ac
LAB_005cd1a5:
005CD1A5  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
LAB_005cd1ac:
005CD1AC  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005CD1B2  8D 85 00 FF FF FF         LEA EAX,[EBP + 0xffffff00]
005CD1B8  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
005CD1BE  53                        PUSH EBX
005CD1BF  50                        PUSH EAX
005CD1C0  89 8D FC FE FF FF         MOV dword ptr [EBP + 0xfffffefc],ECX
005CD1C6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005CD1CC  E8 1F 06 16 00            CALL 0x0072d7f0
005CD1D1  83 C4 08                  ADD ESP,0x8
005CD1D4  3B C3                     CMP EAX,EBX
005CD1D6  75 15                     JNZ 0x005cd1ed
005CD1D8  8D 4D C8                  LEA ECX,[EBP + -0x38]
005CD1DB  51                        PUSH ECX
005CD1DC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005CD1DF  8B 91 1D 21 00 00         MOV EDX,dword ptr [ECX + 0x211d]
005CD1E5  52                        PUSH EDX
005CD1E6  6A 02                     PUSH 0x2
005CD1E8  E8 93 8E 11 00            CALL 0x006e6080
LAB_005cd1ed:
005CD1ED  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005CD1F0  C7 45 D8 22 00 00 00      MOV dword ptr [EBP + -0x28],0x22
005CD1F7  83 F9 0A                  CMP ECX,0xa
005CD1FA  77 05                     JA 0x005cd201
005CD1FC  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
005CD1FF  EB 1A                     JMP 0x005cd21b
LAB_005cd201:
005CD201  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005CD204  25 FF FF 00 00            AND EAX,0xffff
005CD209  8D 50 0A                  LEA EDX,[EAX + 0xa]
005CD20C  3B D1                     CMP EDX,ECX
005CD20E  76 08                     JBE 0x005cd218
005CD210  83 C1 F6                  ADD ECX,-0xa
005CD213  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
005CD216  EB 03                     JMP 0x005cd21b
LAB_005cd218:
005CD218  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_005cd21b:
005CD21B  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
005CD221  8D 95 BC FE FF FF         LEA EDX,[EBP + 0xfffffebc]
005CD227  8D 8D B8 FE FF FF         LEA ECX,[EBP + 0xfffffeb8]
005CD22D  53                        PUSH EBX
005CD22E  52                        PUSH EDX
005CD22F  89 85 B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],EAX
005CD235  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CD23B  E8 B0 05 16 00            CALL 0x0072d7f0
005CD240  83 C4 08                  ADD ESP,0x8
005CD243  3B C3                     CMP EAX,EBX
005CD245  75 15                     JNZ 0x005cd25c
005CD247  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005CD24A  8D 45 C8                  LEA EAX,[EBP + -0x38]
005CD24D  50                        PUSH EAX
005CD24E  8B 91 1D 21 00 00         MOV EDX,dword ptr [ECX + 0x211d]
005CD254  52                        PUSH EDX
005CD255  6A 02                     PUSH 0x2
005CD257  E8 24 8E 11 00            CALL 0x006e6080
LAB_005cd25c:
005CD25C  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
005CD25F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005CD264  5F                        POP EDI
005CD265  5E                        POP ESI
005CD266  5B                        POP EBX
005CD267  8B E5                     MOV ESP,EBP
005CD269  5D                        POP EBP
005CD26A  C3                        RET
LAB_005cd26b:
005CD26B  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
005CD26E  68 F0 D2 7C 00            PUSH 0x7cd2f0
005CD273  68 CC 4C 7A 00            PUSH 0x7a4ccc
005CD278  56                        PUSH ESI
005CD279  53                        PUSH EBX
005CD27A  68 64 01 00 00            PUSH 0x164
005CD27F  68 58 D2 7C 00            PUSH 0x7cd258
005CD284  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CD28A  E8 41 02 0E 00            CALL 0x006ad4d0
005CD28F  83 C4 18                  ADD ESP,0x18
005CD292  85 C0                     TEST EAX,EAX
005CD294  74 01                     JZ 0x005cd297
005CD296  CC                        INT3
LAB_005cd297:
005CD297  68 64 01 00 00            PUSH 0x164
005CD29C  68 58 D2 7C 00            PUSH 0x7cd258
005CD2A1  53                        PUSH EBX
005CD2A2  56                        PUSH ESI
005CD2A3  E8 98 8B 0D 00            CALL 0x006a5e40
005CD2A8  5F                        POP EDI
005CD2A9  5E                        POP ESI
005CD2AA  5B                        POP EBX
005CD2AB  8B E5                     MOV ESP,EBP
005CD2AD  5D                        POP EBP
005CD2AE  C3                        RET
