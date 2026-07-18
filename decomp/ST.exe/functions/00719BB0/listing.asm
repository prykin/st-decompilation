FUN_00719bb0:
00719BB0  55                        PUSH EBP
00719BB1  8B EC                     MOV EBP,ESP
00719BB3  83 EC 10                  SUB ESP,0x10
00719BB6  56                        PUSH ESI
00719BB7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00719BBA  57                        PUSH EDI
00719BBB  8B 06                     MOV EAX,dword ptr [ESI]
00719BBD  85 C0                     TEST EAX,EAX
00719BBF  0F 84 84 00 00 00         JZ 0x00719c49
00719BC5  8B 3D C0 BE 85 00         MOV EDI,dword ptr [0x0085bec0]
00719BCB  33 C9                     XOR ECX,ECX
00719BCD  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00719BD0  8D 55 F0                  LEA EDX,[EBP + -0x10]
00719BD3  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00719BD6  52                        PUSH EDX
00719BD7  68 02 01 00 00            PUSH 0x102
00719BDC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00719BDF  68 14 08 00 00            PUSH 0x814
00719BE4  50                        PUSH EAX
00719BE5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00719BE8  C7 45 F8 04 00 00 00      MOV dword ptr [EBP + -0x8],0x4
00719BEF  FF D7                     CALL EDI
00719BF1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00719BF4  3D 0C 02 00 00            CMP EAX,0x20c
00719BF9  74 3A                     JZ 0x00719c35
00719BFB  3D 12 02 00 00            CMP EAX,0x212
00719C00  74 33                     JZ 0x00719c35
00719C02  8B 0E                     MOV ECX,dword ptr [ESI]
00719C04  8D 45 F0                  LEA EAX,[EBP + -0x10]
00719C07  50                        PUSH EAX
00719C08  68 02 01 00 00            PUSH 0x102
00719C0D  68 14 08 00 00            PUSH 0x814
00719C12  51                        PUSH ECX
00719C13  C7 45 F8 05 00 00 00      MOV dword ptr [EBP + -0x8],0x5
00719C1A  FF D7                     CALL EDI
00719C1C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00719C1F  85 C0                     TEST EAX,EAX
00719C21  75 07                     JNZ 0x00719c2a
00719C23  83 3E 00                  CMP dword ptr [ESI],0x0
00719C26  74 21                     JZ 0x00719c49
00719C28  EB 10                     JMP 0x00719c3a
LAB_00719c2a:
00719C2A  5F                        POP EDI
00719C2B  B8 01 00 00 00            MOV EAX,0x1
00719C30  5E                        POP ESI
00719C31  8B E5                     MOV ESP,EBP
00719C33  5D                        POP EBP
00719C34  C3                        RET
LAB_00719c35:
00719C35  83 3E 00                  CMP dword ptr [ESI],0x0
00719C38  74 0F                     JZ 0x00719c49
LAB_00719c3a:
00719C3A  56                        PUSH ESI
00719C3B  E8 20 F9 FF FF            CALL 0x00719560
00719C40  56                        PUSH ESI
00719C41  E8 1A 00 00 00            CALL 0x00719c60
00719C46  83 C4 08                  ADD ESP,0x8
LAB_00719c49:
00719C49  5F                        POP EDI
00719C4A  33 C0                     XOR EAX,EAX
00719C4C  5E                        POP ESI
00719C4D  8B E5                     MOV ESP,EBP
00719C4F  5D                        POP EBP
00719C50  C3                        RET
