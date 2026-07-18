FUN_004cc880:
004CC880  55                        PUSH EBP
004CC881  8B EC                     MOV EBP,ESP
004CC883  56                        PUSH ESI
004CC884  8B F1                     MOV ESI,ECX
004CC886  8B 86 40 04 00 00         MOV EAX,dword ptr [ESI + 0x440]
004CC88C  83 F8 02                  CMP EAX,0x2
004CC88F  74 43                     JZ 0x004cc8d4
004CC891  83 F8 03                  CMP EAX,0x3
004CC894  74 3E                     JZ 0x004cc8d4
004CC896  83 F8 04                  CMP EAX,0x4
004CC899  74 39                     JZ 0x004cc8d4
004CC89B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004CC89E  89 86 40 04 00 00         MOV dword ptr [ESI + 0x440],EAX
004CC8A4  8B 86 44 04 00 00         MOV EAX,dword ptr [ESI + 0x444]
004CC8AA  85 C0                     TEST EAX,EAX
004CC8AC  74 26                     JZ 0x004cc8d4
004CC8AE  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004CC8B1  51                        PUSH ECX
004CC8B2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CC8B8  E8 FA 80 F3 FF            CALL 0x004049b7
004CC8BD  3C 03                     CMP AL,0x3
004CC8BF  75 09                     JNZ 0x004cc8ca
004CC8C1  83 BE 3C 04 00 00 02      CMP dword ptr [ESI + 0x43c],0x2
004CC8C8  75 0A                     JNZ 0x004cc8d4
LAB_004cc8ca:
004CC8CA  C7 86 48 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x448],0x1
LAB_004cc8d4:
004CC8D4  33 C0                     XOR EAX,EAX
004CC8D6  5E                        POP ESI
004CC8D7  5D                        POP EBP
004CC8D8  C2 04 00                  RET 0x4
