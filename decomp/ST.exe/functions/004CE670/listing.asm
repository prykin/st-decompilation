FUN_004ce670:
004CE670  55                        PUSH EBP
004CE671  8B EC                     MOV EBP,ESP
004CE673  51                        PUSH ECX
004CE674  56                        PUSH ESI
004CE675  8B F1                     MOV ESI,ECX
004CE677  57                        PUSH EDI
004CE678  33 FF                     XOR EDI,EDI
004CE67A  8B 86 D4 04 00 00         MOV EAX,dword ptr [ESI + 0x4d4]
004CE680  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004CE683  3B C7                     CMP EAX,EDI
004CE685  74 2A                     JZ 0x004ce6b1
004CE687  8B 86 D3 05 00 00         MOV EAX,dword ptr [ESI + 0x5d3]
004CE68D  3B C7                     CMP EAX,EDI
004CE68F  74 20                     JZ 0x004ce6b1
004CE691  8D 4D FC                  LEA ECX,[EBP + -0x4]
004CE694  51                        PUSH ECX
004CE695  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004CE69B  50                        PUSH EAX
004CE69C  E8 2F 7C 21 00            CALL 0x006e62d0
004CE6A1  85 C0                     TEST EAX,EAX
004CE6A3  75 0C                     JNZ 0x004ce6b1
004CE6A5  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004CE6A8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CE6AB  52                        PUSH EDX
004CE6AC  E8 BB 6C F3 FF            CALL 0x0040536c
LAB_004ce6b1:
004CE6B1  89 BE D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EDI
004CE6B7  5F                        POP EDI
004CE6B8  33 C0                     XOR EAX,EAX
004CE6BA  5E                        POP ESI
004CE6BB  8B E5                     MOV ESP,EBP
004CE6BD  5D                        POP EBP
004CE6BE  C3                        RET
