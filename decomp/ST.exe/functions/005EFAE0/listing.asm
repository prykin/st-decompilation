FUN_005efae0:
005EFAE0  55                        PUSH EBP
005EFAE1  8B EC                     MOV EBP,ESP
005EFAE3  56                        PUSH ESI
005EFAE4  8B F1                     MOV ESI,ECX
005EFAE6  57                        PUSH EDI
005EFAE7  33 FF                     XOR EDI,EDI
005EFAE9  8A 86 4F 02 00 00         MOV AL,byte ptr [ESI + 0x24f]
005EFAEF  84 C0                     TEST AL,AL
005EFAF1  75 5A                     JNZ 0x005efb4d
005EFAF3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005EFAF6  8D 45 08                  LEA EAX,[EBP + 0x8]
005EFAF9  50                        PUSH EAX
005EFAFA  51                        PUSH ECX
005EFAFB  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005EFB01  E8 CA 67 0F 00            CALL 0x006e62d0
005EFB06  83 F8 FC                  CMP EAX,-0x4
005EFB09  74 42                     JZ 0x005efb4d
005EFB0B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005EFB0E  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
005EFB11  89 96 A7 02 00 00         MOV dword ptr [ESI + 0x2a7],EDX
005EFB17  66 8B 48 32               MOV CX,word ptr [EAX + 0x32]
005EFB1B  66 89 8E AB 02 00 00      MOV word ptr [ESI + 0x2ab],CX
005EFB22  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
005EFB25  8A 8E 20 03 00 00         MOV CL,byte ptr [ESI + 0x320]
005EFB2B  B8 01 00 00 00            MOV EAX,0x1
005EFB30  84 C9                     TEST CL,CL
005EFB32  89 96 A3 02 00 00         MOV dword ptr [ESI + 0x2a3],EDX
005EFB38  88 86 4F 02 00 00         MOV byte ptr [ESI + 0x24f],AL
005EFB3E  74 0F                     JZ 0x005efb4f
005EFB40  C6 86 20 03 00 00 00      MOV byte ptr [ESI + 0x320],0x0
005EFB47  5F                        POP EDI
005EFB48  5E                        POP ESI
005EFB49  5D                        POP EBP
005EFB4A  C2 04 00                  RET 0x4
LAB_005efb4d:
005EFB4D  8B C7                     MOV EAX,EDI
LAB_005efb4f:
005EFB4F  5F                        POP EDI
005EFB50  5E                        POP ESI
005EFB51  5D                        POP EBP
005EFB52  C2 04 00                  RET 0x4
