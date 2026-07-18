FUN_0074e122:
0074E122  56                        PUSH ESI
0074E123  57                        PUSH EDI
0074E124  8B 7C 24 0C               MOV EDI,dword ptr [ESP + 0xc]
0074E128  8B F1                     MOV ESI,ECX
0074E12A  85 FF                     TEST EDI,EDI
0074E12C  75 0B                     JNZ 0x0074e139
0074E12E  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074E132  E8 3B FE FF FF            CALL 0x0074df72
0074E137  EB 3F                     JMP 0x0074e178
LAB_0074e139:
0074E139  3B 3E                     CMP EDI,dword ptr [ESI]
0074E13B  75 0D                     JNZ 0x0074e14a
0074E13D  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074E141  8B CE                     MOV ECX,ESI
0074E143  E8 6D FE FF FF            CALL 0x0074dfb5
0074E148  EB 2E                     JMP 0x0074e178
LAB_0074e14a:
0074E14A  8D 4E 0C                  LEA ECX,[ESI + 0xc]
0074E14D  E8 AD 01 00 00            CALL 0x0074e2ff
0074E152  85 C0                     TEST EAX,EAX
0074E154  75 0C                     JNZ 0x0074e162
0074E156  6A 0C                     PUSH 0xc
0074E158  E8 D3 03 FE FF            CALL 0x0072e530
0074E15D  85 C0                     TEST EAX,EAX
0074E15F  59                        POP ECX
0074E160  74 16                     JZ 0x0074e178
LAB_0074e162:
0074E162  8B 4C 24 10               MOV ECX,dword ptr [ESP + 0x10]
0074E166  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0074E169  8B 0F                     MOV ECX,dword ptr [EDI]
0074E16B  89 08                     MOV dword ptr [EAX],ECX
0074E16D  89 78 04                  MOV dword ptr [EAX + 0x4],EDI
0074E170  89 07                     MOV dword ptr [EDI],EAX
0074E172  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0074E175  FF 46 08                  INC dword ptr [ESI + 0x8]
LAB_0074e178:
0074E178  5F                        POP EDI
0074E179  5E                        POP ESI
0074E17A  C2 08 00                  RET 0x8
