FUN_006b5a50:
006B5A50  8B C1                     MOV EAX,ECX
006B5A52  56                        PUSH ESI
006B5A53  85 C0                     TEST EAX,EAX
006B5A55  57                        PUSH EDI
006B5A56  74 3B                     JZ 0x006b5a93
006B5A58  85 D2                     TEST EDX,EDX
006B5A5A  74 37                     JZ 0x006b5a93
006B5A5C  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
006B5A5F  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
006B5A62  3B F1                     CMP ESI,ECX
006B5A64  74 08                     JZ 0x006b5a6e
006B5A66  5F                        POP EDI
006B5A67  B8 CE FF FF FF            MOV EAX,0xffffffce
006B5A6C  5E                        POP ESI
006B5A6D  C3                        RET
LAB_006b5a6e:
006B5A6E  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006B5A71  8B 7A 0C                  MOV EDI,dword ptr [EDX + 0xc]
006B5A74  3B CF                     CMP ECX,EDI
006B5A76  74 08                     JZ 0x006b5a80
006B5A78  5F                        POP EDI
006B5A79  B8 02 00 00 00            MOV EAX,0x2
006B5A7E  5E                        POP ESI
006B5A7F  C3                        RET
LAB_006b5a80:
006B5A80  0F AF CE                  IMUL ECX,ESI
006B5A83  8B 70 1C                  MOV ESI,dword ptr [EAX + 0x1c]
006B5A86  8B 7A 1C                  MOV EDI,dword ptr [EDX + 0x1c]
006B5A89  33 C0                     XOR EAX,EAX
006B5A8B  F3 A6                     CMPSB.REPE ES:EDI,ESI
006B5A8D  5F                        POP EDI
006B5A8E  5E                        POP ESI
006B5A8F  0F 95 C0                  SETNZ AL
006B5A92  C3                        RET
LAB_006b5a93:
006B5A93  5F                        POP EDI
006B5A94  B8 CC FF FF FF            MOV EAX,0xffffffcc
006B5A99  5E                        POP ESI
006B5A9A  C3                        RET
