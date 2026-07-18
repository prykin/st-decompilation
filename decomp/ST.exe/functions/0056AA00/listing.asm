FUN_0056aa00:
0056AA00  55                        PUSH EBP
0056AA01  8B EC                     MOV EBP,ESP
0056AA03  83 EC 0C                  SUB ESP,0xc
0056AA06  53                        PUSH EBX
0056AA07  56                        PUSH ESI
0056AA08  8B F1                     MOV ESI,ECX
0056AA0A  57                        PUSH EDI
0056AA0B  8A 86 6F 14 00 00         MOV AL,byte ptr [ESI + 0x146f]
0056AA11  84 C0                     TEST AL,AL
0056AA13  0F 84 3D 01 00 00         JZ 0x0056ab56
0056AA19  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0056AA1C  8B CB                     MOV ECX,EBX
0056AA1E  81 E1 FF 00 00 00         AND ECX,0xff
0056AA24  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0056AA27  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
0056AA2A  8D 14 C6                  LEA EDX,[ESI + EAX*0x8]
0056AA2D  8D 84 10 CA 11 00 00      LEA EAX,[EAX + EDX*0x1 + 0x11ca]
0056AA34  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0056AA37  8A 10                     MOV DL,byte ptr [EAX]
0056AA39  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
0056AA3C  3A D0                     CMP DL,AL
0056AA3E  0F 84 12 01 00 00         JZ 0x0056ab56
0056AA44  A1 88 2A 80 00            MOV EAX,[0x00802a88]
0056AA49  85 C0                     TEST EAX,EAX
0056AA4B  74 7B                     JZ 0x0056aac8
0056AA4D  8A 86 2D 11 00 00         MOV AL,byte ptr [ESI + 0x112d]
0056AA53  3A D8                     CMP BL,AL
0056AA55  75 4C                     JNZ 0x0056aaa3
0056AA57  32 DB                     XOR BL,BL
0056AA59  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0056AA60  8D BE CA 11 00 00         LEA EDI,[ESI + 0x11ca]
LAB_0056aa66:
0056AA66  80 7F FF FF               CMP byte ptr [EDI + -0x1],0xff
0056AA6A  74 24                     JZ 0x0056aa90
0056AA6C  3A 5D 08                  CMP BL,byte ptr [EBP + 0x8]
0056AA6F  74 1F                     JZ 0x0056aa90
0056AA71  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0056AA74  8A 10                     MOV DL,byte ptr [EAX]
0056AA76  8A 07                     MOV AL,byte ptr [EDI]
0056AA78  3A D0                     CMP DL,AL
0056AA7A  75 14                     JNZ 0x0056aa90
0056AA7C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056AA7F  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0056AA85  50                        PUSH EAX
0056AA86  6A 00                     PUSH 0x0
0056AA88  E8 88 B4 E9 FF            CALL 0x00405f15
0056AA8D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0056aa90:
0056AA90  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056AA93  FE C3                     INC BL
0056AA95  40                        INC EAX
0056AA96  83 C7 51                  ADD EDI,0x51
0056AA99  80 FB 08                  CMP BL,0x8
0056AA9C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0056AA9F  72 C5                     JC 0x0056aa66
0056AAA1  EB 25                     JMP 0x0056aac8
LAB_0056aaa3:
0056AAA3  25 FF 00 00 00            AND EAX,0xff
0056AAA8  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0056AAAB  8D 3C C6                  LEA EDI,[ESI + EAX*0x8]
0056AAAE  3A 94 38 CA 11 00 00      CMP DL,byte ptr [EAX + EDI*0x1 + 0x11ca]
0056AAB5  75 11                     JNZ 0x0056aac8
0056AAB7  51                        PUSH ECX
0056AAB8  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0056AABE  6A 00                     PUSH 0x0
0056AAC0  E8 50 B4 E9 FF            CALL 0x00405f15
0056AAC5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0056aac8:
0056AAC8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0056AACB  8A 55 0C                  MOV DL,byte ptr [EBP + 0xc]
0056AACE  88 10                     MOV byte ptr [EAX],DL
0056AAD0  8B 15 88 2A 80 00         MOV EDX,dword ptr [0x00802a88]
0056AAD6  85 D2                     TEST EDX,EDX
0056AAD8  74 7C                     JZ 0x0056ab56
0056AADA  8A 86 74 14 00 00         MOV AL,byte ptr [ESI + 0x1474]
0056AAE0  84 C0                     TEST AL,AL
0056AAE2  74 72                     JZ 0x0056ab56
0056AAE4  8A 86 2D 11 00 00         MOV AL,byte ptr [ESI + 0x112d]
0056AAEA  8A 5D 08                  MOV BL,byte ptr [EBP + 0x8]
0056AAED  3A D8                     CMP BL,AL
0056AAEF  75 44                     JNZ 0x0056ab35
0056AAF1  32 DB                     XOR BL,BL
0056AAF3  33 FF                     XOR EDI,EDI
0056AAF5  81 C6 CA 11 00 00         ADD ESI,0x11ca
LAB_0056aafb:
0056AAFB  80 7E FF FF               CMP byte ptr [ESI + -0x1],0xff
0056AAFF  74 20                     JZ 0x0056ab21
0056AB01  3A 5D 08                  CMP BL,byte ptr [EBP + 0x8]
0056AB04  74 1B                     JZ 0x0056ab21
0056AB06  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0056AB09  8A 01                     MOV AL,byte ptr [ECX]
0056AB0B  8A 0E                     MOV CL,byte ptr [ESI]
0056AB0D  3A C1                     CMP AL,CL
0056AB0F  75 10                     JNZ 0x0056ab21
0056AB11  57                        PUSH EDI
0056AB12  6A 01                     PUSH 0x1
0056AB14  8B CA                     MOV ECX,EDX
0056AB16  E8 FA B3 E9 FF            CALL 0x00405f15
0056AB1B  8B 15 88 2A 80 00         MOV EDX,dword ptr [0x00802a88]
LAB_0056ab21:
0056AB21  FE C3                     INC BL
0056AB23  47                        INC EDI
0056AB24  83 C6 51                  ADD ESI,0x51
0056AB27  80 FB 08                  CMP BL,0x8
0056AB2A  72 CF                     JC 0x0056aafb
0056AB2C  5F                        POP EDI
0056AB2D  5E                        POP ESI
0056AB2E  5B                        POP EBX
0056AB2F  8B E5                     MOV ESP,EBP
0056AB31  5D                        POP EBP
0056AB32  C2 08 00                  RET 0x8
LAB_0056ab35:
0056AB35  8A 5D 0C                  MOV BL,byte ptr [EBP + 0xc]
0056AB38  25 FF 00 00 00            AND EAX,0xff
0056AB3D  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0056AB40  8D 34 C6                  LEA ESI,[ESI + EAX*0x8]
0056AB43  3A 9C 30 CA 11 00 00      CMP BL,byte ptr [EAX + ESI*0x1 + 0x11ca]
0056AB4A  75 0A                     JNZ 0x0056ab56
0056AB4C  51                        PUSH ECX
0056AB4D  6A 01                     PUSH 0x1
0056AB4F  8B CA                     MOV ECX,EDX
0056AB51  E8 BF B3 E9 FF            CALL 0x00405f15
LAB_0056ab56:
0056AB56  5F                        POP EDI
0056AB57  5E                        POP ESI
0056AB58  5B                        POP EBX
0056AB59  8B E5                     MOV ESP,EBP
0056AB5B  5D                        POP EBP
0056AB5C  C2 08 00                  RET 0x8
