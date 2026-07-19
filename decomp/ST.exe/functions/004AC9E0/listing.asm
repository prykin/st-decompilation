FUN_004ac9e0:
004AC9E0  55                        PUSH EBP
004AC9E1  8B EC                     MOV EBP,ESP
004AC9E3  6A FF                     PUSH -0x1
004AC9E5  68 98 07 79 00            PUSH 0x790798
004AC9EA  68 64 D9 72 00            PUSH 0x72d964
004AC9EF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
004AC9F5  50                        PUSH EAX
004AC9F6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
004AC9FD  83 EC 28                  SUB ESP,0x28
004ACA00  53                        PUSH EBX
004ACA01  56                        PUSH ESI
004ACA02  57                        PUSH EDI
004ACA03  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
004ACA06  8B F1                     MOV ESI,ECX
004ACA08  33 DB                     XOR EBX,EBX
004ACA0A  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004ACA0D  83 C8 FF                  OR EAX,0xffffffff
004ACA10  39 46 18                  CMP dword ptr [ESI + 0x18],EAX
004ACA13  0F 84 FA 01 00 00         JZ 0x004acc13
004ACA19  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
004ACA20  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
FUN_004ac9e0::cf_continue_loop_004ACA23:
004ACA23  3B 5E 14                  CMP EBX,dword ptr [ESI + 0x14]
004ACA26  0F 8D BF 01 00 00         JGE 0x004acbeb
004ACA2C  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004ACA2F  85 46 1C                  TEST dword ptr [ESI + 0x1c],EAX
004ACA32  0F 84 A4 01 00 00         JZ 0x004acbdc
004ACA38  8D 1C DB                  LEA EBX,[EBX + EBX*0x8]
004ACA3B  C1 E3 02                  SHL EBX,0x2
004ACA3E  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
004ACA41  8D 04 19                  LEA EAX,[ECX + EBX*0x1]
004ACA44  F6 40 0E 01               TEST byte ptr [EAX + 0xe],0x1
004ACA48  0F 85 8E 01 00 00         JNZ 0x004acbdc
004ACA4E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004ACA51  8B F9                     MOV EDI,ECX
004ACA53  2B 78 1C                  SUB EDI,dword ptr [EAX + 0x1c]
004ACA56  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
004ACA59  89 48 1C                  MOV dword ptr [EAX + 0x1c],ECX
004ACA5C  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
004ACA63  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
004ACA66  8D 04 1A                  LEA EAX,[EDX + EBX*0x1]
004ACA69  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004ACA6C  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004ACA6F  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
004ACA72  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
004ACA75  8B 09                     MOV ECX,dword ptr [ECX]
004ACA77  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
004ACA7A  8B D1                     MOV EDX,ECX
004ACA7C  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
004ACA7F  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
004ACA82  03 D1                     ADD EDX,ECX
004ACA84  3B D7                     CMP EDX,EDI
004ACA86  76 48                     JBE 0x004acad0
004ACA88  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
004ACA8B  3B D7                     CMP EDX,EDI
004ACA8D  7C 19                     JL 0x004acaa8
004ACA8F  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004ACA92  2B C7                     SUB EAX,EDI
004ACA94  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
004ACA97  89 01                     MOV dword ptr [ECX],EAX
004ACA99  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
004ACA9C  43                        INC EBX
004ACA9D  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
004ACAA0  D1 65 E4                  SHL dword ptr [EBP + -0x1c],0x1
004ACAA3  E9 7B FF FF FF            JMP 0x004aca23
LAB_004acaa8:
004ACAA8  2B CF                     SUB ECX,EDI
004ACAAA  03 CA                     ADD ECX,EDX
004ACAAC  89 48 20                  MOV dword ptr [EAX + 0x20],ECX
004ACAAF  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
004ACAB2  03 DA                     ADD EBX,EDX
004ACAB4  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
004ACAB7  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
004ACABA  C7 04 81 00 00 00 00      MOV dword ptr [ECX + EAX*0x4],0x0
004ACAC1  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
004ACAC4  43                        INC EBX
004ACAC5  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
004ACAC8  D1 65 E4                  SHL dword ptr [EBP + -0x1c],0x1
004ACACB  E9 53 FF FF FF            JMP 0x004aca23
LAB_004acad0:
004ACAD0  85 C9                     TEST ECX,ECX
004ACAD2  74 17                     JZ 0x004acaeb
004ACAD4  C7 40 20 00 00 00 00      MOV dword ptr [EAX + 0x20],0x0
004ACADB  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
004ACADE  52                        PUSH EDX
004ACADF  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004ACAE2  50                        PUSH EAX
004ACAE3  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004ACAE6  E8 C5 D1 23 00            CALL 0x006e9cb0
LAB_004acaeb:
004ACAEB  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
004ACAEE  03 CB                     ADD ECX,EBX
004ACAF0  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
004ACAF3  C1 E0 02                  SHL EAX,0x2
004ACAF6  8B 11                     MOV EDX,dword ptr [ECX]
004ACAF8  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
004ACAFB  8B 54 10 31               MOV EDX,dword ptr [EAX + EDX*0x1 + 0x31]
004ACAFF  89 14 01                  MOV dword ptr [ECX + EAX*0x1],EDX
004ACB02  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
004ACB05  03 C3                     ADD EAX,EBX
004ACB07  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004ACB0A  3B 48 14                  CMP ECX,dword ptr [EAX + 0x14]
004ACB0D  75 2B                     JNZ 0x004acb3a
004ACB0F  8A 48 0D                  MOV CL,byte ptr [EAX + 0xd]
004ACB12  80 F9 02                  CMP CL,0x2
004ACB15  75 1A                     JNZ 0x004acb31
004ACB17  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
004ACB1A  52                        PUSH EDX
004ACB1B  8B CE                     MOV ECX,ESI
004ACB1D  E8 42 77 F5 FF            CALL 0x00404264
004ACB22  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
004ACB25  43                        INC EBX
004ACB26  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
004ACB29  D1 65 E4                  SHL dword ptr [EBP + -0x1c],0x1
004ACB2C  E9 F2 FE FF FF            JMP 0x004aca23
LAB_004acb31:
004ACB31  80 F9 01                  CMP CL,0x1
004ACB34  0F 84 A2 00 00 00         JZ 0x004acbdc
LAB_004acb3a:
004ACB3A  2B 7D D4                  SUB EDI,dword ptr [EBP + -0x2c]
004ACB3D  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
004ACB40  74 5E                     JZ 0x004acba0
004ACB42  F6 40 0E 04               TEST byte ptr [EAX + 0xe],0x4
004ACB46  74 58                     JZ 0x004acba0
LAB_004acb48:
004ACB48  85 FF                     TEST EDI,EDI
004ACB4A  7C 3B                     JL 0x004acb87
004ACB4C  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004ACB4F  50                        PUSH EAX
004ACB50  8B CE                     MOV ECX,ESI
004ACB52  E8 0E 80 F5 FF            CALL 0x00404b65
004ACB57  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
004ACB5A  89 44 19 18               MOV dword ptr [ECX + EBX*0x1 + 0x18],EAX
004ACB5E  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
004ACB61  8D 04 1A                  LEA EAX,[EDX + EBX*0x1]
004ACB64  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004ACB67  8B 10                     MOV EDX,dword ptr [EAX]
004ACB69  2B 7C 8A 31               SUB EDI,dword ptr [EDX + ECX*0x4 + 0x31]
004ACB6D  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
004ACB70  3B 48 14                  CMP ECX,dword ptr [EAX + 0x14]
004ACB73  75 D3                     JNZ 0x004acb48
004ACB75  8A 40 0D                  MOV AL,byte ptr [EAX + 0xd]
004ACB78  3C 02                     CMP AL,0x2
004ACB7A  74 04                     JZ 0x004acb80
004ACB7C  3C 01                     CMP AL,0x1
004ACB7E  75 C8                     JNZ 0x004acb48
LAB_004acb80:
004ACB80  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
LAB_004acb87:
004ACB87  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004ACB8A  85 C0                     TEST EAX,EAX
004ACB8C  75 36                     JNZ 0x004acbc4
004ACB8E  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
004ACB91  03 C3                     ADD EAX,EBX
004ACB93  F7 DF                     NEG EDI
004ACB95  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004ACB98  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004ACB9B  89 3C 8A                  MOV dword ptr [EDX + ECX*0x4],EDI
004ACB9E  EB 24                     JMP 0x004acbc4
LAB_004acba0:
004ACBA0  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
004ACBA3  57                        PUSH EDI
004ACBA4  8B CE                     MOV ECX,ESI
004ACBA6  E8 BA 7F F5 FF            CALL 0x00404b65
004ACBAB  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
004ACBAE  89 44 19 18               MOV dword ptr [ECX + EBX*0x1 + 0x18],EAX
004ACBB2  0F BE 56 13               MOVSX EDX,byte ptr [ESI + 0x13]
004ACBB6  3B FA                     CMP EDI,EDX
004ACBB8  75 0A                     JNZ 0x004acbc4
004ACBBA  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
004ACBBD  8B 4C 18 18               MOV ECX,dword ptr [EAX + EBX*0x1 + 0x18]
004ACBC1  89 4E 30                  MOV dword ptr [ESI + 0x30],ECX
LAB_004acbc4:
004ACBC4  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
004ACBC7  8B 44 1A 18               MOV EAX,dword ptr [EDX + EBX*0x1 + 0x18]
004ACBCB  50                        PUSH EAX
004ACBCC  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004ACBCF  51                        PUSH ECX
004ACBD0  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004ACBD3  52                        PUSH EDX
004ACBD4  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004ACBD7  E8 94 D6 23 00            CALL 0x006ea270
LAB_004acbdc:
004ACBDC  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
004ACBDF  43                        INC EBX
004ACBE0  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
004ACBE3  D1 65 E4                  SHL dword ptr [EBP + -0x1c],0x1
004ACBE6  E9 38 FE FF FF            JMP 0x004aca23
LAB_004acbeb:
004ACBEB  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
004ACBF2  33 C0                     XOR EAX,EAX
004ACBF4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004ACBF7  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
004ACBFE  5F                        POP EDI
004ACBFF  5E                        POP ESI
004ACC00  5B                        POP EBX
004ACC01  8B E5                     MOV ESP,EBP
004ACC03  5D                        POP EBP
004ACC04  C2 04 00                  RET 0x4
LAB_004acc13:
004ACC13  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004ACC16  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004ACC19  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
004ACC20  5F                        POP EDI
004ACC21  5E                        POP ESI
004ACC22  5B                        POP EBX
004ACC23  8B E5                     MOV ESP,EBP
004ACC25  5D                        POP EBP
004ACC26  C2 04 00                  RET 0x4
