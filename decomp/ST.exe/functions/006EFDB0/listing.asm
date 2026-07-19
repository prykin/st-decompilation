mfTMapSave:
006EFDB0  55                        PUSH EBP
006EFDB1  8B EC                     MOV EBP,ESP
006EFDB3  83 EC 60                  SUB ESP,0x60
006EFDB6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006EFDBB  53                        PUSH EBX
006EFDBC  56                        PUSH ESI
006EFDBD  57                        PUSH EDI
006EFDBE  8D 55 A4                  LEA EDX,[EBP + -0x5c]
006EFDC1  8D 4D A0                  LEA ECX,[EBP + -0x60]
006EFDC4  6A 00                     PUSH 0x0
006EFDC6  52                        PUSH EDX
006EFDC7  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006EFDCE  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006EFDD1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006EFDD7  E8 14 DA 03 00            CALL 0x0072d7f0
006EFDDC  8B F0                     MOV ESI,EAX
006EFDDE  83 C4 08                  ADD ESP,0x8
006EFDE1  85 F6                     TEST ESI,ESI
006EFDE3  0F 85 50 01 00 00         JNZ 0x006eff39
006EFDE9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006EFDEC  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006EFDEF  85 C0                     TEST EAX,EAX
006EFDF1  74 04                     JZ 0x006efdf7
006EFDF3  85 DB                     TEST EBX,EBX
006EFDF5  75 17                     JNZ 0x006efe0e
LAB_006efdf7:
006EFDF7  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006EFDFC  68 44 01 00 00            PUSH 0x144
006EFE01  68 88 EF 7E 00            PUSH 0x7eef88
006EFE06  50                        PUSH EAX
006EFE07  6A CC                     PUSH -0x34
006EFE09  E8 32 60 FB FF            CALL 0x006a5e40
LAB_006efe0e:
006EFE0E  53                        PUSH EBX
006EFE0F  E8 FC F5 FF FF            CALL 0x006ef410
006EFE14  8B F0                     MOV ESI,EAX
006EFE16  83 C4 04                  ADD ESP,0x4
006EFE19  85 F6                     TEST ESI,ESI
006EFE1B  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006EFE1E  7F 18                     JG 0x006efe38
006EFE20  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006EFE26  68 46 01 00 00            PUSH 0x146
006EFE2B  68 88 EF 7E 00            PUSH 0x7eef88
006EFE30  51                        PUSH ECX
006EFE31  6A CD                     PUSH -0x33
006EFE33  E8 08 60 FB FF            CALL 0x006a5e40
LAB_006efe38:
006EFE38  8D 3C F6                  LEA EDI,[ESI + ESI*0x8]
006EFE3B  57                        PUSH EDI
006EFE3C  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006EFE3F  E8 CC AD FB FF            CALL 0x006aac10
006EFE44  8B 8B 55 04 00 00         MOV ECX,dword ptr [EBX + 0x455]
006EFE4A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006EFE4D  85 C9                     TEST ECX,ECX
006EFE4F  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006EFE56  7E 79                     JLE 0x006efed1
006EFE58  8D 78 02                  LEA EDI,[EAX + 0x2]
006EFE5B  8D B3 59 04 00 00         LEA ESI,[EBX + 0x459]
LAB_006efe61:
006EFE61  8B 06                     MOV EAX,dword ptr [ESI]
006EFE63  85 C0                     TEST EAX,EAX
006EFE65  74 4D                     JZ 0x006efeb4
006EFE67  66 83 78 4E 00            CMP word ptr [EAX + 0x4e],0x0
006EFE6C  75 18                     JNZ 0x006efe86
006EFE6E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006EFE74  68 4E 01 00 00            PUSH 0x14e
006EFE79  68 88 EF 7E 00            PUSH 0x7eef88
006EFE7E  52                        PUSH EDX
006EFE7F  6A FB                     PUSH -0x5
006EFE81  E8 BA 5F FB FF            CALL 0x006a5e40
LAB_006efe86:
006EFE86  8B 06                     MOV EAX,dword ptr [ESI]
006EFE88  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
006EFE8B  88 4F FE                  MOV byte ptr [EDI + -0x2],CL
006EFE8E  8B 16                     MOV EDX,dword ptr [ESI]
006EFE90  8A 42 04                  MOV AL,byte ptr [EDX + 0x4]
006EFE93  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
006EFE96  8B 0E                     MOV ECX,dword ptr [ESI]
006EFE98  8A 51 06                  MOV DL,byte ptr [ECX + 0x6]
006EFE9B  8D 4F 01                  LEA ECX,[EDI + 0x1]
006EFE9E  88 17                     MOV byte ptr [EDI],DL
006EFEA0  8B 06                     MOV EAX,dword ptr [ESI]
006EFEA2  83 C0 4A                  ADD EAX,0x4a
006EFEA5  83 C7 09                  ADD EDI,0x9
006EFEA8  8B 10                     MOV EDX,dword ptr [EAX]
006EFEAA  89 11                     MOV dword ptr [ECX],EDX
006EFEAC  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
006EFEB0  66 89 41 04               MOV word ptr [ECX + 0x4],AX
LAB_006efeb4:
006EFEB4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006EFEB7  8B 8B 55 04 00 00         MOV ECX,dword ptr [EBX + 0x455]
006EFEBD  40                        INC EAX
006EFEBE  83 C6 04                  ADD ESI,0x4
006EFEC1  3B C1                     CMP EAX,ECX
006EFEC3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006EFEC6  7C 99                     JL 0x006efe61
006EFEC8  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006EFECB  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006EFECE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006efed1:
006EFED1  66 8B 13                  MOV DX,word ptr [EBX]
006EFED4  33 C9                     XOR ECX,ECX
006EFED6  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006EFED9  66 89 55 E6               MOV word ptr [EBP + -0x1a],DX
006EFEDD  8A 53 04                  MOV DL,byte ptr [EBX + 0x4]
006EFEE0  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006EFEE3  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006EFEE6  66 8B 4B 02               MOV CX,word ptr [EBX + 0x2]
006EFEEA  66 89 4D E8               MOV word ptr [EBP + -0x18],CX
006EFEEE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006EFEF1  88 55 EB                  MOV byte ptr [EBP + -0x15],DL
006EFEF4  6A 00                     PUSH 0x0
006EFEF6  8D 55 E4                  LEA EDX,[EBP + -0x1c]
006EFEF9  51                        PUSH ECX
006EFEFA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006EFEFD  52                        PUSH EDX
006EFEFE  57                        PUSH EDI
006EFEFF  50                        PUSH EAX
006EFF00  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006EFF03  66 89 75 E4               MOV word ptr [EBP + -0x1c],SI
006EFF07  50                        PUSH EAX
006EFF08  6A 0F                     PUSH 0xf
006EFF0A  C6 45 EA 08               MOV byte ptr [EBP + -0x16],0x8
006EFF0E  C6 45 EC 05               MOV byte ptr [EBP + -0x14],0x5
006EFF12  E8 D9 14 00 00            CALL 0x006f13f0
006EFF17  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006EFF1A  85 C0                     TEST EAX,EAX
006EFF1C  74 09                     JZ 0x006eff27
006EFF1E  8D 4D FC                  LEA ECX,[EBP + -0x4]
006EFF21  51                        PUSH ECX
006EFF22  E8 39 B1 FB FF            CALL 0x006ab060
LAB_006eff27:
006EFF27  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006EFF2A  33 C0                     XOR EAX,EAX
006EFF2C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006EFF32  5F                        POP EDI
006EFF33  5E                        POP ESI
006EFF34  5B                        POP EBX
006EFF35  8B E5                     MOV ESP,EBP
006EFF37  5D                        POP EBP
006EFF38  C3                        RET
LAB_006eff39:
006EFF39  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
006EFF3C  68 18 F0 7E 00            PUSH 0x7ef018
006EFF41  68 CC 4C 7A 00            PUSH 0x7a4ccc
006EFF46  56                        PUSH ESI
006EFF47  6A 00                     PUSH 0x0
006EFF49  68 66 01 00 00            PUSH 0x166
006EFF4E  68 88 EF 7E 00            PUSH 0x7eef88
006EFF53  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006EFF58  E8 73 D5 FB FF            CALL 0x006ad4d0
006EFF5D  83 C4 18                  ADD ESP,0x18
006EFF60  85 C0                     TEST EAX,EAX
006EFF62  74 01                     JZ 0x006eff65
006EFF64  CC                        INT3
LAB_006eff65:
006EFF65  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006EFF68  85 C0                     TEST EAX,EAX
006EFF6A  74 09                     JZ 0x006eff75
006EFF6C  8D 4D FC                  LEA ECX,[EBP + -0x4]
006EFF6F  51                        PUSH ECX
006EFF70  E8 EB B0 FB FF            CALL 0x006ab060
LAB_006eff75:
006EFF75  68 6A 01 00 00            PUSH 0x16a
006EFF7A  68 88 EF 7E 00            PUSH 0x7eef88
006EFF7F  6A 00                     PUSH 0x0
006EFF81  56                        PUSH ESI
006EFF82  E8 B9 5E FB FF            CALL 0x006a5e40
006EFF87  8B C6                     MOV EAX,ESI
006EFF89  5F                        POP EDI
006EFF8A  5E                        POP ESI
006EFF8B  5B                        POP EBX
006EFF8C  8B E5                     MOV ESP,EBP
006EFF8E  5D                        POP EBP
006EFF8F  C3                        RET
