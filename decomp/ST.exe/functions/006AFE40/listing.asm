FUN_006afe40:
006AFE40  55                        PUSH EBP
006AFE41  8B EC                     MOV EBP,ESP
006AFE43  51                        PUSH ECX
006AFE44  53                        PUSH EBX
006AFE45  56                        PUSH ESI
006AFE46  57                        PUSH EDI
006AFE47  8B F9                     MOV EDI,ECX
006AFE49  85 FF                     TEST EDI,EDI
006AFE4B  8B DA                     MOV EBX,EDX
006AFE4D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006AFE50  0F 84 DD 00 00 00         JZ 0x006aff33
006AFE56  85 DB                     TEST EBX,EBX
006AFE58  0F 84 D5 00 00 00         JZ 0x006aff33
006AFE5E  8B 07                     MOV EAX,dword ptr [EDI]
006AFE60  85 C0                     TEST EAX,EAX
006AFE62  75 66                     JNZ 0x006afeca
006AFE64  8B 03                     MOV EAX,dword ptr [EBX]
006AFE66  F6 C4 01                  TEST AH,0x1
006AFE69  74 4A                     JZ 0x006afeb5
006AFE6B  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
006AFE6E  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
006AFE71  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
006AFE74  50                        PUSH EAX
006AFE75  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006AFE78  51                        PUSH ECX
006AFE79  52                        PUSH EDX
006AFE7A  50                        PUSH EAX
006AFE7B  6A 00                     PUSH 0x0
006AFE7D  E8 8E E4 FF FF            CALL 0x006ae310
LAB_006afe82:
006AFE82  89 07                     MOV dword ptr [EDI],EAX
LAB_006afe84:
006AFE84  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
006AFE87  8B 17                     MOV EDX,dword ptr [EDI]
006AFE89  0F AF 4B 0C               IMUL ECX,dword ptr [EBX + 0xc]
006AFE8D  8B 73 1C                  MOV ESI,dword ptr [EBX + 0x1c]
006AFE90  8B 7A 1C                  MOV EDI,dword ptr [EDX + 0x1c]
006AFE93  8B C1                     MOV EAX,ECX
006AFE95  C1 E9 02                  SHR ECX,0x2
006AFE98  F3 A5                     MOVSD.REP ES:EDI,ESI
006AFE9A  8B C8                     MOV ECX,EAX
006AFE9C  83 E1 03                  AND ECX,0x3
006AFE9F  F3 A4                     MOVSB.REP ES:EDI,ESI
006AFEA1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AFEA4  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006AFEA7  5F                        POP EDI
006AFEA8  5E                        POP ESI
006AFEA9  8B 11                     MOV EDX,dword ptr [ECX]
006AFEAB  5B                        POP EBX
006AFEAC  89 42 0C                  MOV dword ptr [EDX + 0xc],EAX
006AFEAF  33 C0                     XOR EAX,EAX
006AFEB1  8B E5                     MOV ESP,EBP
006AFEB3  5D                        POP EBP
006AFEB4  C3                        RET
LAB_006afeb5:
006AFEB5  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
006AFEB8  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
006AFEBB  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006AFEBE  51                        PUSH ECX
006AFEBF  52                        PUSH EDX
006AFEC0  50                        PUSH EAX
006AFEC1  6A 00                     PUSH 0x0
006AFEC3  E8 C8 E3 FF FF            CALL 0x006ae290
006AFEC8  EB B8                     JMP 0x006afe82
LAB_006afeca:
006AFECA  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006AFECD  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
006AFED0  3B CA                     CMP ECX,EDX
006AFED2  74 1C                     JZ 0x006afef0
006AFED4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006AFEDA  6A 17                     PUSH 0x17
006AFEDC  68 74 DA 7E 00            PUSH 0x7eda74
006AFEE1  52                        PUSH EDX
006AFEE2  6A CE                     PUSH -0x32
006AFEE4  E8 57 5F FF FF            CALL 0x006a5e40
006AFEE9  5F                        POP EDI
006AFEEA  5E                        POP ESI
006AFEEB  5B                        POP EBX
006AFEEC  8B E5                     MOV ESP,EBP
006AFEEE  5D                        POP EBP
006AFEEF  C3                        RET
LAB_006afef0:
006AFEF0  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006AFEF3  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
006AFEF6  3B CA                     CMP ECX,EDX
006AFEF8  73 8A                     JNC 0x006afe84
LAB_006afefa:
006AFEFA  50                        PUSH EAX
006AFEFB  E8 30 E3 FF FF            CALL 0x006ae230
006AFF00  8B F0                     MOV ESI,EAX
006AFF02  85 F6                     TEST ESI,ESI
006AFF04  75 11                     JNZ 0x006aff17
006AFF06  8B 07                     MOV EAX,dword ptr [EDI]
006AFF08  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
006AFF0B  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006AFF0E  3B D1                     CMP EDX,ECX
006AFF10  72 E8                     JC 0x006afefa
006AFF12  E9 6D FF FF FF            JMP 0x006afe84
LAB_006aff17:
006AFF17  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006AFF1C  6A 1A                     PUSH 0x1a
006AFF1E  68 74 DA 7E 00            PUSH 0x7eda74
006AFF23  50                        PUSH EAX
006AFF24  56                        PUSH ESI
006AFF25  E8 16 5F FF FF            CALL 0x006a5e40
006AFF2A  8B C6                     MOV EAX,ESI
006AFF2C  5F                        POP EDI
006AFF2D  5E                        POP ESI
006AFF2E  5B                        POP EBX
006AFF2F  8B E5                     MOV ESP,EBP
006AFF31  5D                        POP EBP
006AFF32  C3                        RET
LAB_006aff33:
006AFF33  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006AFF39  6A 22                     PUSH 0x22
006AFF3B  68 74 DA 7E 00            PUSH 0x7eda74
006AFF40  51                        PUSH ECX
006AFF41  6A CC                     PUSH -0x34
006AFF43  E8 F8 5E FF FF            CALL 0x006a5e40
006AFF48  5F                        POP EDI
006AFF49  5E                        POP ESI
006AFF4A  5B                        POP EBX
006AFF4B  8B E5                     MOV ESP,EBP
006AFF4D  5D                        POP EBP
006AFF4E  C3                        RET
