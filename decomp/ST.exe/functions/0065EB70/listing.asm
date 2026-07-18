FUN_0065eb70:
0065EB70  55                        PUSH EBP
0065EB71  8B EC                     MOV EBP,ESP
0065EB73  83 EC 0C                  SUB ESP,0xc
0065EB76  53                        PUSH EBX
0065EB77  8B C1                     MOV EAX,ECX
0065EB79  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065EB7F  56                        PUSH ESI
0065EB80  33 F6                     XOR ESI,ESI
0065EB82  57                        PUSH EDI
0065EB83  3B CE                     CMP ECX,ESI
0065EB85  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0065EB88  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0065EB8B  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0065EB8E  74 33                     JZ 0x0065ebc3
0065EB90  39 75 10                  CMP dword ptr [EBP + 0x10],ESI
0065EB93  74 2E                     JZ 0x0065ebc3
0065EB95  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0065EB98  3B FE                     CMP EDI,ESI
0065EB9A  7E 27                     JLE 0x0065ebc3
0065EB9C  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0065EB9F  3B DE                     CMP EBX,ESI
0065EBA1  7C 05                     JL 0x0065eba8
0065EBA3  83 FB 08                  CMP EBX,0x8
0065EBA6  7E 09                     JLE 0x0065ebb1
LAB_0065eba8:
0065EBA8  8B 98 97 00 00 00         MOV EBX,dword ptr [EAX + 0x97]
0065EBAE  83 FB 08                  CMP EBX,0x8
LAB_0065ebb1:
0065EBB1  75 08                     JNZ 0x0065ebbb
0065EBB3  33 DB                     XOR EBX,EBX
0065EBB5  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_0065ebbb:
0065EBBB  81 FB FF 00 00 00         CMP EBX,0xff
0065EBC1  75 0C                     JNZ 0x0065ebcf
LAB_0065ebc3:
0065EBC3  5F                        POP EDI
0065EBC4  5E                        POP ESI
0065EBC5  83 C8 FF                  OR EAX,0xffffffff
0065EBC8  5B                        POP EBX
0065EBC9  8B E5                     MOV ESP,EBP
0065EBCB  5D                        POP EBP
0065EBCC  C2 1C 00                  RET 0x1c
LAB_0065ebcf:
0065EBCF  53                        PUSH EBX
0065EBD0  E8 A9 32 DA FF            CALL 0x00401e7e
0065EBD5  25 FF FF 00 00            AND EAX,0xffff
0065EBDA  75 08                     JNZ 0x0065ebe4
0065EBDC  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0065EBDF  E9 1E 01 00 00            JMP 0x0065ed02
LAB_0065ebe4:
0065EBE4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0065EBE7  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0065EBEA  C1 E2 02                  SHL EDX,0x2
0065EBED  52                        PUSH EDX
0065EBEE  E8 1D C0 04 00            CALL 0x006aac10
0065EBF3  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
0065EBF6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065EBF9  80 F9 08                  CMP CL,0x8
0065EBFC  89 35 00 19 81 00         MOV dword ptr [0x00811900],ESI
0065EC02  75 05                     JNZ 0x0065ec09
0065EC04  88 5D 20                  MOV byte ptr [EBP + 0x20],BL
0065EC07  EB 10                     JMP 0x0065ec19
LAB_0065ec09:
0065EC09  84 C9                     TEST CL,CL
0065EC0B  7C 08                     JL 0x0065ec15
0065EC0D  80 F9 08                  CMP CL,0x8
0065EC10  88 4D 20                  MOV byte ptr [EBP + 0x20],CL
0065EC13  7E 04                     JLE 0x0065ec19
LAB_0065ec15:
0065EC15  C6 45 20 FF               MOV byte ptr [EBP + 0x20],0xff
LAB_0065ec19:
0065EC19  56                        PUSH ESI
0065EC1A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0065EC1D  50                        PUSH EAX
0065EC1E  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0065EC21  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0065EC24  68 9C 55 40 00            PUSH 0x40559c
0065EC29  6A FF                     PUSH -0x1
0065EC2B  6A FF                     PUSH -0x1
0065EC2D  6A FF                     PUSH -0x1
0065EC2F  56                        PUSH ESI
0065EC30  56                        PUSH ESI
0065EC31  56                        PUSH ESI
0065EC32  50                        PUSH EAX
0065EC33  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0065EC36  51                        PUSH ECX
0065EC37  52                        PUSH EDX
0065EC38  50                        PUSH EAX
0065EC39  53                        PUSH EBX
0065EC3A  E8 B9 26 DA FF            CALL 0x004012f8
0065EC3F  A1 00 19 81 00            MOV EAX,[0x00811900]
0065EC44  83 C4 38                  ADD ESP,0x38
0065EC47  3B C6                     CMP EAX,ESI
0065EC49  75 08                     JNZ 0x0065ec53
0065EC4B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0065EC4E  E9 AF 00 00 00            JMP 0x0065ed02
LAB_0065ec53:
0065EC53  3B C7                     CMP EAX,EDI
0065EC55  7F 4F                     JG 0x0065eca6
0065EC57  33 FF                     XOR EDI,EDI
0065EC59  3B C6                     CMP EAX,ESI
0065EC5B  0F 8E A1 00 00 00         JLE 0x0065ed02
LAB_0065ec61:
0065EC61  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0065EC64  8B 54 0E 0C               MOV EDX,dword ptr [ESI + ECX*0x1 + 0xc]
0065EC68  85 D2                     TEST EDX,EDX
0065EC6A  74 30                     JZ 0x0065ec9c
0065EC6C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0065EC6F  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
0065EC76  8D 55 0C                  LEA EDX,[EBP + 0xc]
0065EC79  88 5D 0C                  MOV byte ptr [EBP + 0xc],BL
0065EC7C  66 8B 4C 0E 10            MOV CX,word ptr [ESI + ECX*0x1 + 0x10]
0065EC81  52                        PUSH EDX
0065EC82  50                        PUSH EAX
0065EC83  66 89 4D 0E               MOV word ptr [EBP + 0xe],CX
0065EC87  C6 45 0D 01               MOV byte ptr [EBP + 0xd],0x1
0065EC8B  E8 30 F5 04 00            CALL 0x006ae1c0
0065EC90  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065EC93  40                        INC EAX
0065EC94  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0065EC97  A1 00 19 81 00            MOV EAX,[0x00811900]
LAB_0065ec9c:
0065EC9C  47                        INC EDI
0065EC9D  83 C6 2C                  ADD ESI,0x2c
0065ECA0  3B F8                     CMP EDI,EAX
0065ECA2  7C BD                     JL 0x0065ec61
0065ECA4  EB 5A                     JMP 0x0065ed00
LAB_0065eca6:
0065ECA6  3B FE                     CMP EDI,ESI
0065ECA8  7E 58                     JLE 0x0065ed02
0065ECAA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0065ECAD  8D 71 1C                  LEA ESI,[ECX + 0x1c]
0065ECB0  EB 05                     JMP 0x0065ecb7
LAB_0065ecb2:
0065ECB2  A1 00 19 81 00            MOV EAX,[0x00811900]
LAB_0065ecb7:
0065ECB7  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0065ECBA  50                        PUSH EAX
0065ECBB  52                        PUSH EDX
0065ECBC  8B CE                     MOV ECX,ESI
0065ECBE  E8 60 37 DA FF            CALL 0x00402423
0065ECC3  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0065ECC6  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0065ECC9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065ECCC  8B 4C 90 0C               MOV ECX,dword ptr [EAX + EDX*0x4 + 0xc]
0065ECD0  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
0065ECD3  85 C9                     TEST ECX,ECX
0065ECD5  74 26                     JZ 0x0065ecfd
0065ECD7  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
0065ECDE  88 5D 0C                  MOV byte ptr [EBP + 0xc],BL
0065ECE1  66 8B 48 10               MOV CX,word ptr [EAX + 0x10]
0065ECE5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0065ECE8  8D 55 0C                  LEA EDX,[EBP + 0xc]
0065ECEB  66 89 4D 0E               MOV word ptr [EBP + 0xe],CX
0065ECEF  52                        PUSH EDX
0065ECF0  50                        PUSH EAX
0065ECF1  C6 45 0D 01               MOV byte ptr [EBP + 0xd],0x1
0065ECF5  E8 C6 F4 04 00            CALL 0x006ae1c0
0065ECFA  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_0065ecfd:
0065ECFD  4F                        DEC EDI
0065ECFE  75 B2                     JNZ 0x0065ecb2
LAB_0065ed00:
0065ED00  33 F6                     XOR ESI,ESI
LAB_0065ed02:
0065ED02  39 75 F8                  CMP dword ptr [EBP + -0x8],ESI
0065ED05  74 09                     JZ 0x0065ed10
0065ED07  8D 4D F8                  LEA ECX,[EBP + -0x8]
0065ED0A  51                        PUSH ECX
0065ED0B  E8 50 C3 04 00            CALL 0x006ab060
LAB_0065ed10:
0065ED10  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065ED13  5F                        POP EDI
0065ED14  5E                        POP ESI
0065ED15  5B                        POP EBX
0065ED16  8B E5                     MOV ESP,EBP
0065ED18  5D                        POP EBP
0065ED19  C2 1C 00                  RET 0x1c
