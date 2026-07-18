FUN_00694c30:
00694C30  56                        PUSH ESI
00694C31  8B F1                     MOV ESI,ECX
00694C33  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00694C36  85 C0                     TEST EAX,EAX
00694C38  75 07                     JNZ 0x00694c41
00694C3A  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00694C3D  85 C0                     TEST EAX,EAX
00694C3F  74 07                     JZ 0x00694c48
LAB_00694c41:
00694C41  8B CE                     MOV ECX,ESI
00694C43  E8 40 F0 D6 FF            CALL 0x00403c88
LAB_00694c48:
00694C48  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00694C4B  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00694C4E  89 4E 14                  MOV dword ptr [ESI + 0x14],ECX
00694C51  8B CE                     MOV ECX,ESI
00694C53  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
00694C56  C7 46 08 00 00 00 00      MOV dword ptr [ESI + 0x8],0x0
00694C5D  C7 46 0C 00 00 00 00      MOV dword ptr [ESI + 0xc],0x0
00694C64  E8 3F C6 D6 FF            CALL 0x004012a8
00694C69  5E                        POP ESI
00694C6A  C3                        RET
