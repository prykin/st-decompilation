FUN_004ad310:
004AD310  56                        PUSH ESI
004AD311  8B F1                     MOV ESI,ECX
004AD313  57                        PUSH EDI
004AD314  33 FF                     XOR EDI,EDI
004AD316  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
004AD319  85 C0                     TEST EAX,EAX
004AD31B  7E 10                     JLE 0x004ad32d
LAB_004ad31d:
004AD31D  57                        PUSH EDI
004AD31E  8B CE                     MOV ECX,ESI
004AD320  E8 65 76 F5 FF            CALL 0x0040498a
004AD325  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
004AD328  47                        INC EDI
004AD329  3B F8                     CMP EDI,EAX
004AD32B  7C F0                     JL 0x004ad31d
LAB_004ad32d:
004AD32D  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004AD330  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004AD333  50                        PUSH EAX
004AD334  E8 67 B8 23 00            CALL 0x006e8ba0
004AD339  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
004AD33C  8D 46 20                  LEA EAX,[ESI + 0x20]
004AD33F  5F                        POP EDI
004AD340  5E                        POP ESI
004AD341  85 C9                     TEST ECX,ECX
004AD343  74 06                     JZ 0x004ad34b
004AD345  50                        PUSH EAX
004AD346  E8 15 DD 1F 00            CALL 0x006ab060
LAB_004ad34b:
004AD34B  C3                        RET
