STT3DSprC::Init:
004AD1F0  55                        PUSH EBP
004AD1F1  8B EC                     MOV EBP,ESP
004AD1F3  83 EC 48                  SUB ESP,0x48
004AD1F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004AD1FB  56                        PUSH ESI
004AD1FC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004AD1FF  57                        PUSH EDI
004AD200  8D 55 BC                  LEA EDX,[EBP + -0x44]
004AD203  8D 4D B8                  LEA ECX,[EBP + -0x48]
004AD206  6A 00                     PUSH 0x0
004AD208  52                        PUSH EDX
004AD209  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004AD20C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004AD212  E8 D9 05 28 00            CALL 0x0072d7f0
004AD217  83 C4 08                  ADD ESP,0x8
004AD21A  85 C0                     TEST EAX,EAX
004AD21C  75 77                     JNZ 0x004ad295
004AD21E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004AD221  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AD224  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
004AD227  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004AD22A  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
004AD22D  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
004AD230  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004AD233  57                        PUSH EDI
004AD234  89 4E 08                  MOV dword ptr [ESI + 0x8],ECX
004AD237  51                        PUSH ECX
004AD238  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004AD23B  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
004AD23E  50                        PUSH EAX
004AD23F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004AD242  51                        PUSH ECX
004AD243  50                        PUSH EAX
004AD244  6A 00                     PUSH 0x0
004AD246  8D 4E 18                  LEA ECX,[ESI + 0x18]
004AD249  52                        PUSH EDX
004AD24A  51                        PUSH ECX
004AD24B  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004AD24E  89 56 14                  MOV dword ptr [ESI + 0x14],EDX
004AD251  E8 0A B4 23 00            CALL 0x006e8660
004AD256  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
004AD259  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
004AD25C  C1 E2 02                  SHL EDX,0x2
004AD25F  52                        PUSH EDX
004AD260  E8 0B DA 1F 00            CALL 0x006aac70
004AD265  8B F8                     MOV EDI,EAX
004AD267  33 C0                     XOR EAX,EAX
004AD269  89 7E 20                  MOV dword ptr [ESI + 0x20],EDI
004AD26C  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
004AD26F  8D 0C F6                  LEA ECX,[ESI + ESI*0x8]
004AD272  C1 E1 02                  SHL ECX,0x2
004AD275  8B D1                     MOV EDX,ECX
004AD277  C1 E9 02                  SHR ECX,0x2
004AD27A  F3 AB                     STOSD.REP ES:EDI
004AD27C  8B CA                     MOV ECX,EDX
004AD27E  83 E1 03                  AND ECX,0x3
004AD281  F3 AA                     STOSB.REP ES:EDI
004AD283  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004AD286  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004AD28B  33 C0                     XOR EAX,EAX
004AD28D  5F                        POP EDI
004AD28E  5E                        POP ESI
004AD28F  8B E5                     MOV ESP,EBP
004AD291  5D                        POP EBP
004AD292  C2 1C 00                  RET 0x1c
LAB_004ad295:
004AD295  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004AD298  68 10 C7 7A 00            PUSH 0x7ac710
004AD29D  68 CC 4C 7A 00            PUSH 0x7a4ccc
004AD2A2  50                        PUSH EAX
004AD2A3  6A 00                     PUSH 0x0
004AD2A5  68 B1 02 00 00            PUSH 0x2b1
004AD2AA  68 38 C6 7A 00            PUSH 0x7ac638
004AD2AF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004AD2B5  E8 16 02 20 00            CALL 0x006ad4d0
004AD2BA  83 C4 18                  ADD ESP,0x18
004AD2BD  85 C0                     TEST EAX,EAX
004AD2BF  74 01                     JZ 0x004ad2c2
004AD2C1  CC                        INT3
LAB_004ad2c2:
004AD2C2  5F                        POP EDI
004AD2C3  83 C8 FF                  OR EAX,0xffffffff
004AD2C6  5E                        POP ESI
004AD2C7  8B E5                     MOV ESP,EBP
004AD2C9  5D                        POP EBP
004AD2CA  C2 1C 00                  RET 0x1c
