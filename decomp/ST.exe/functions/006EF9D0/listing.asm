FUN_006ef9d0:
006EF9D0  55                        PUSH EBP
006EF9D1  8B EC                     MOV EBP,ESP
006EF9D3  83 EC 50                  SUB ESP,0x50
006EF9D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006EF9DB  53                        PUSH EBX
006EF9DC  56                        PUSH ESI
006EF9DD  57                        PUSH EDI
006EF9DE  33 FF                     XOR EDI,EDI
006EF9E0  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006EF9E3  8D 4D B0                  LEA ECX,[EBP + -0x50]
006EF9E6  57                        PUSH EDI
006EF9E7  52                        PUSH EDX
006EF9E8  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006EF9EB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006EF9EE  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006EF9F1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006EF9F7  E8 F4 DD 03 00            CALL 0x0072d7f0
006EF9FC  8B F0                     MOV ESI,EAX
006EF9FE  83 C4 08                  ADD ESP,0x8
006EFA01  3B F7                     CMP ESI,EDI
006EFA03  0F 85 13 01 00 00         JNZ 0x006efb1c
006EFA09  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006EFA0C  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006EFA0F  3B F7                     CMP ESI,EDI
006EFA11  74 04                     JZ 0x006efa17
006EFA13  3B DF                     CMP EBX,EDI
006EFA15  75 17                     JNZ 0x006efa2e
LAB_006efa17:
006EFA17  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006EFA1C  68 D4 00 00 00            PUSH 0xd4
006EFA21  68 88 EF 7E 00            PUSH 0x7eef88
006EFA26  50                        PUSH EAX
006EFA27  6A CC                     PUSH -0x34
006EFA29  E8 12 64 FB FF            CALL 0x006a5e40
LAB_006efa2e:
006EFA2E  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006EFA31  85 FF                     TEST EDI,EDI
006EFA33  75 05                     JNZ 0x006efa3a
006EFA35  8B FB                     MOV EDI,EBX
006EFA37  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
LAB_006efa3a:
006EFA3A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006EFA3D  85 C0                     TEST EAX,EAX
006EFA3F  74 2F                     JZ 0x006efa70
006EFA41  8B 8E 55 04 00 00         MOV ECX,dword ptr [ESI + 0x455]
006EFA47  85 C9                     TEST ECX,ECX
006EFA49  0F 8E C5 00 00 00         JLE 0x006efb14
006EFA4F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EFA52  8D 86 59 04 00 00         LEA EAX,[ESI + 0x459]
LAB_006efa58:
006EFA58  83 38 00                  CMP dword ptr [EAX],0x0
006EFA5B  74 01                     JZ 0x006efa5e
006EFA5D  42                        INC EDX
LAB_006efa5e:
006EFA5E  83 C0 04                  ADD EAX,0x4
006EFA61  49                        DEC ECX
006EFA62  75 F4                     JNZ 0x006efa58
006EFA64  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_006efa67:
006EFA67  F7 DA                     NEG EDX
006EFA69  52                        PUSH EDX
006EFA6A  FF 55 14                  CALL dword ptr [EBP + 0x14]
006EFA6D  83 C4 04                  ADD ESP,0x4
LAB_006efa70:
006EFA70  8A 4E 04                  MOV CL,byte ptr [ESI + 0x4]
006EFA73  0F BF 56 02               MOVSX EDX,word ptr [ESI + 0x2]
006EFA77  0F BF 06                  MOVSX EAX,word ptr [ESI]
006EFA7A  51                        PUSH ECX
006EFA7B  57                        PUSH EDI
006EFA7C  53                        PUSH EBX
006EFA7D  52                        PUSH EDX
006EFA7E  50                        PUSH EAX
006EFA7F  E8 CC 01 00 00            CALL 0x006efc50
006EFA84  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006EFA87  8B 86 55 04 00 00         MOV EAX,dword ptr [ESI + 0x455]
006EFA8D  33 FF                     XOR EDI,EDI
006EFA8F  83 C4 14                  ADD ESP,0x14
006EFA92  3B C7                     CMP EAX,EDI
006EFA94  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006EFA97  7E 68                     JLE 0x006efb01
006EFA99  8D 8E 59 04 00 00         LEA ECX,[ESI + 0x459]
006EFA9F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006efaa2:
006EFAA2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006EFAA5  8B 0A                     MOV ECX,dword ptr [EDX]
006EFAA7  85 C9                     TEST ECX,ECX
006EFAA9  74 42                     JZ 0x006efaed
006EFAAB  8D 41 4A                  LEA EAX,[ECX + 0x4a]
006EFAAE  83 EC 08                  SUB ESP,0x8
006EFAB1  8B D4                     MOV EDX,ESP
006EFAB3  8B 18                     MOV EBX,dword ptr [EAX]
006EFAB5  89 1A                     MOV dword ptr [EDX],EBX
006EFAB7  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
006EFABB  66 89 42 04               MOV word ptr [EDX + 0x4],AX
006EFABF  0F BF 51 08               MOVSX EDX,word ptr [ECX + 0x8]
006EFAC3  0F BF 41 06               MOVSX EAX,word ptr [ECX + 0x6]
006EFAC7  0F BF 49 04               MOVSX ECX,word ptr [ECX + 0x4]
006EFACB  52                        PUSH EDX
006EFACC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006EFACF  50                        PUSH EAX
006EFAD0  51                        PUSH ECX
006EFAD1  52                        PUSH EDX
006EFAD2  E8 B9 04 00 00            CALL 0x006eff90
006EFAD7  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006EFADA  83 C4 18                  ADD ESP,0x18
006EFADD  85 C0                     TEST EAX,EAX
006EFADF  74 09                     JZ 0x006efaea
006EFAE1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006EFAE4  51                        PUSH ECX
006EFAE5  FF D0                     CALL EAX
006EFAE7  83 C4 04                  ADD ESP,0x4
LAB_006efaea:
006EFAEA  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_006efaed:
006EFAED  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006EFAF0  8B 86 55 04 00 00         MOV EAX,dword ptr [ESI + 0x455]
006EFAF6  47                        INC EDI
006EFAF7  83 C1 04                  ADD ECX,0x4
006EFAFA  3B F8                     CMP EDI,EAX
006EFAFC  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006EFAFF  7C A1                     JL 0x006efaa2
LAB_006efb01:
006EFB01  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006EFB04  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006EFB07  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006EFB0D  5F                        POP EDI
006EFB0E  5E                        POP ESI
006EFB0F  5B                        POP EBX
006EFB10  8B E5                     MOV ESP,EBP
006EFB12  5D                        POP EBP
006EFB13  C3                        RET
LAB_006efb14:
006EFB14  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EFB17  E9 4B FF FF FF            JMP 0x006efa67
LAB_006efb1c:
006EFB1C  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006EFB1F  68 EC EF 7E 00            PUSH 0x7eefec
006EFB24  68 CC 4C 7A 00            PUSH 0x7a4ccc
006EFB29  56                        PUSH ESI
006EFB2A  57                        PUSH EDI
006EFB2B  68 E5 00 00 00            PUSH 0xe5
006EFB30  68 88 EF 7E 00            PUSH 0x7eef88
006EFB35  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006EFB3A  E8 91 D9 FB FF            CALL 0x006ad4d0
006EFB3F  83 C4 18                  ADD ESP,0x18
006EFB42  85 C0                     TEST EAX,EAX
006EFB44  74 01                     JZ 0x006efb47
006EFB46  CC                        INT3
LAB_006efb47:
006EFB47  8D 4D F8                  LEA ECX,[EBP + -0x8]
006EFB4A  51                        PUSH ECX
006EFB4B  E8 20 00 00 00            CALL 0x006efb70
006EFB50  83 C4 04                  ADD ESP,0x4
006EFB53  68 E9 00 00 00            PUSH 0xe9
006EFB58  68 88 EF 7E 00            PUSH 0x7eef88
006EFB5D  57                        PUSH EDI
006EFB5E  56                        PUSH ESI
006EFB5F  E8 DC 62 FB FF            CALL 0x006a5e40
006EFB64  5F                        POP EDI
006EFB65  5E                        POP ESI
006EFB66  33 C0                     XOR EAX,EAX
006EFB68  5B                        POP EBX
006EFB69  8B E5                     MOV ESP,EBP
006EFB6B  5D                        POP EBP
006EFB6C  C3                        RET
