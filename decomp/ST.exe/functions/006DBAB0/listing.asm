FUN_006dbab0:
006DBAB0  53                        PUSH EBX
006DBAB1  56                        PUSH ESI
006DBAB2  57                        PUSH EDI
006DBAB3  8B F1                     MOV ESI,ECX
LAB_006dbab5:
006DBAB5  8B 06                     MOV EAX,dword ptr [ESI]
006DBAB7  33 FF                     XOR EDI,EDI
006DBAB9  3B C7                     CMP EAX,EDI
006DBABB  74 06                     JZ 0x006dbac3
006DBABD  89 B8 2C 02 00 00         MOV dword ptr [EAX + 0x22c],EDI
LAB_006dbac3:
006DBAC3  8D 86 4A 04 00 00         LEA EAX,[ESI + 0x44a]
006DBAC9  50                        PUSH EAX
006DBACA  E8 C1 DD FD FF            CALL 0x006b9890
006DBACF  8D 8E 4E 04 00 00         LEA ECX,[ESI + 0x44e]
006DBAD5  51                        PUSH ECX
006DBAD6  E8 B5 DD FD FF            CALL 0x006b9890
006DBADB  8D 96 52 04 00 00         LEA EDX,[ESI + 0x452]
006DBAE1  52                        PUSH EDX
006DBAE2  E8 A9 DD FD FF            CALL 0x006b9890
006DBAE7  8D 86 20 04 00 00         LEA EAX,[ESI + 0x420]
006DBAED  50                        PUSH EAX
006DBAEE  E8 6D F5 FC FF            CALL 0x006ab060
006DBAF3  8D 96 28 04 00 00         LEA EDX,[ESI + 0x428]
006DBAF9  33 C9                     XOR ECX,ECX
006DBAFB  33 C0                     XOR EAX,EAX
006DBAFD  89 0A                     MOV dword ptr [EDX],ECX
006DBAFF  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
006DBB02  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
006DBB05  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
006DBB08  8D 8E A2 04 00 00         LEA ECX,[ESI + 0x4a2]
006DBB0E  8D 96 88 03 00 00         LEA EDX,[ESI + 0x388]
006DBB14  89 01                     MOV dword ptr [ECX],EAX
006DBB16  52                        PUSH EDX
006DBB17  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
006DBB1A  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
006DBB1D  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
006DBB20  89 BE BA 04 00 00         MOV dword ptr [ESI + 0x4ba],EDI
006DBB26  89 BE 3E 04 00 00         MOV dword ptr [ESI + 0x43e],EDI
006DBB2C  89 BE C6 04 00 00         MOV dword ptr [ESI + 0x4c6],EDI
006DBB32  89 BE CA 04 00 00         MOV dword ptr [ESI + 0x4ca],EDI
006DBB38  89 BE D6 04 00 00         MOV dword ptr [ESI + 0x4d6],EDI
006DBB3E  89 BE DA 04 00 00         MOV dword ptr [ESI + 0x4da],EDI
006DBB44  E8 17 F5 FC FF            CALL 0x006ab060
006DBB49  39 BE 1C 03 00 00         CMP dword ptr [ESI + 0x31c],EDI
006DBB4F  74 60                     JZ 0x006dbbb1
006DBB51  8B 86 10 03 00 00         MOV EAX,dword ptr [ESI + 0x310]
006DBB57  33 DB                     XOR EBX,EBX
006DBB59  3B C7                     CMP EAX,EDI
006DBB5B  7E 3C                     JLE 0x006dbb99
LAB_006dbb5d:
006DBB5D  8B 86 1C 03 00 00         MOV EAX,dword ptr [ESI + 0x31c]
006DBB63  8B 0C 07                  MOV ECX,dword ptr [EDI + EAX*0x1]
006DBB66  F6 C5 80                  TEST CH,0x80
006DBB69  74 08                     JZ 0x006dbb73
006DBB6B  53                        PUSH EBX
006DBB6C  8B CE                     MOV ECX,ESI
006DBB6E  E8 2D D0 00 00            CALL 0x006e8ba0
LAB_006dbb73:
006DBB73  8B 8E 1C 03 00 00         MOV ECX,dword ptr [ESI + 0x31c]
006DBB79  8B 94 0F EC 00 00 00      MOV EDX,dword ptr [EDI + ECX*0x1 + 0xec]
006DBB80  52                        PUSH EDX
006DBB81  E8 0A A3 FC FF            CALL 0x006a5e90
006DBB86  8B 86 10 03 00 00         MOV EAX,dword ptr [ESI + 0x310]
006DBB8C  43                        INC EBX
006DBB8D  81 C7 14 01 00 00         ADD EDI,0x114
006DBB93  3B D8                     CMP EBX,EAX
006DBB95  7C C6                     JL 0x006dbb5d
006DBB97  33 FF                     XOR EDI,EDI
LAB_006dbb99:
006DBB99  8D 86 1C 03 00 00         LEA EAX,[ESI + 0x31c]
006DBB9F  50                        PUSH EAX
006DBBA0  E8 BB F4 FC FF            CALL 0x006ab060
006DBBA5  8D 86 30 03 00 00         LEA EAX,[ESI + 0x330]
006DBBAB  50                        PUSH EAX
006DBBAC  E8 AF F4 FC FF            CALL 0x006ab060
LAB_006dbbb1:
006DBBB1  8D 4E 08                  LEA ECX,[ESI + 0x8]
006DBBB4  89 BE E0 02 00 00         MOV dword ptr [ESI + 0x2e0],EDI
006DBBBA  51                        PUSH ECX
006DBBBB  89 3E                     MOV dword ptr [ESI],EDI
006DBBBD  89 BE 10 03 00 00         MOV dword ptr [ESI + 0x310],EDI
006DBBC3  89 BE 18 03 00 00         MOV dword ptr [ESI + 0x318],EDI
006DBBC9  89 BE 28 03 00 00         MOV dword ptr [ESI + 0x328],EDI
006DBBCF  89 BE 2C 03 00 00         MOV dword ptr [ESI + 0x32c],EDI
006DBBD5  89 BE DC 02 00 00         MOV dword ptr [ESI + 0x2dc],EDI
006DBBDB  89 BE A8 02 00 00         MOV dword ptr [ESI + 0x2a8],EDI
006DBBE1  E8 7A F4 FC FF            CALL 0x006ab060
006DBBE6  8D 56 10                  LEA EDX,[ESI + 0x10]
006DBBE9  52                        PUSH EDX
006DBBEA  E8 71 F4 FC FF            CALL 0x006ab060
006DBBEF  8D 46 18                  LEA EAX,[ESI + 0x18]
006DBBF2  50                        PUSH EAX
006DBBF3  E8 68 F4 FC FF            CALL 0x006ab060
006DBBF8  8D 8E 58 01 00 00         LEA ECX,[ESI + 0x158]
006DBBFE  51                        PUSH ECX
006DBBFF  E8 5C F4 FC FF            CALL 0x006ab060
006DBC04  8D 96 54 01 00 00         LEA EDX,[ESI + 0x154]
006DBC0A  52                        PUSH EDX
006DBC0B  E8 50 F4 FC FF            CALL 0x006ab060
006DBC10  8D 46 1C                  LEA EAX,[ESI + 0x1c]
006DBC13  50                        PUSH EAX
006DBC14  E8 47 F4 FC FF            CALL 0x006ab060
006DBC19  8D 8E 50 03 00 00         LEA ECX,[ESI + 0x350]
006DBC1F  51                        PUSH ECX
006DBC20  E8 3B F4 FC FF            CALL 0x006ab060
006DBC25  8D 96 54 03 00 00         LEA EDX,[ESI + 0x354]
006DBC2B  52                        PUSH EDX
006DBC2C  E8 2F F4 FC FF            CALL 0x006ab060
006DBC31  8D 86 B0 02 00 00         LEA EAX,[ESI + 0x2b0]
006DBC37  50                        PUSH EAX
006DBC38  E8 23 F4 FC FF            CALL 0x006ab060
006DBC3D  8D 8E 94 02 00 00         LEA ECX,[ESI + 0x294]
006DBC43  51                        PUSH ECX
006DBC44  E8 47 DC FD FF            CALL 0x006b9890
006DBC49  8B CE                     MOV ECX,ESI
006DBC4B  E8 D0 A9 00 00            CALL 0x006e6620
006DBC50  89 7E 14                  MOV dword ptr [ESI + 0x14],EDI
006DBC53  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
006DBC56  89 BE 80 02 00 00         MOV dword ptr [ESI + 0x280],EDI
006DBC5C  89 BE 90 02 00 00         MOV dword ptr [ESI + 0x290],EDI
006DBC62  89 BE 9C 02 00 00         MOV dword ptr [ESI + 0x29c],EDI
006DBC68  89 BE 40 01 00 00         MOV dword ptr [ESI + 0x140],EDI
006DBC6E  89 BE 8C 02 00 00         MOV dword ptr [ESI + 0x28c],EDI
006DBC74  89 BE 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EDI
006DBC7A  89 BE 24 01 00 00         MOV dword ptr [ESI + 0x124],EDI
006DBC80  8B B6 58 03 00 00         MOV ESI,dword ptr [ESI + 0x358]
006DBC86  3B F7                     CMP ESI,EDI
006DBC88  0F 85 27 FE FF FF         JNZ 0x006dbab5
006DBC8E  5F                        POP EDI
006DBC8F  5E                        POP ESI
006DBC90  5B                        POP EBX
006DBC91  C3                        RET
