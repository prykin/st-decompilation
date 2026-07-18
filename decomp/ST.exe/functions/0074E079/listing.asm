FUN_0074e079:
0074E079  56                        PUSH ESI
0074E07A  57                        PUSH EDI
0074E07B  8B 7C 24 0C               MOV EDI,dword ptr [ESP + 0xc]
0074E07F  8B F1                     MOV ESI,ECX
0074E081  85 FF                     TEST EDI,EDI
0074E083  75 0B                     JNZ 0x0074e090
0074E085  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074E089  E8 27 FF FF FF            CALL 0x0074dfb5
0074E08E  EB 41                     JMP 0x0074e0d1
LAB_0074e090:
0074E090  3B 7E 04                  CMP EDI,dword ptr [ESI + 0x4]
0074E093  75 0D                     JNZ 0x0074e0a2
0074E095  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074E099  8B CE                     MOV ECX,ESI
0074E09B  E8 D2 FE FF FF            CALL 0x0074df72
0074E0A0  EB 2F                     JMP 0x0074e0d1
LAB_0074e0a2:
0074E0A2  8D 4E 0C                  LEA ECX,[ESI + 0xc]
0074E0A5  E8 55 02 00 00            CALL 0x0074e2ff
0074E0AA  85 C0                     TEST EAX,EAX
0074E0AC  75 0C                     JNZ 0x0074e0ba
0074E0AE  6A 0C                     PUSH 0xc
0074E0B0  E8 7B 04 FE FF            CALL 0x0072e530
0074E0B5  85 C0                     TEST EAX,EAX
0074E0B7  59                        POP ECX
0074E0B8  74 17                     JZ 0x0074e0d1
LAB_0074e0ba:
0074E0BA  8B 4C 24 10               MOV ECX,dword ptr [ESP + 0x10]
0074E0BE  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0074E0C1  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
0074E0C4  89 38                     MOV dword ptr [EAX],EDI
0074E0C6  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0074E0C9  89 01                     MOV dword ptr [ECX],EAX
0074E0CB  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
0074E0CE  FF 46 08                  INC dword ptr [ESI + 0x8]
LAB_0074e0d1:
0074E0D1  5F                        POP EDI
0074E0D2  5E                        POP ESI
0074E0D3  C2 08 00                  RET 0x8
