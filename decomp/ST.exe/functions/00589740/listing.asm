FUN_00589740:
00589740  A1 74 67 80 00            MOV EAX,[0x00806774]
00589745  53                        PUSH EBX
00589746  56                        PUSH ESI
00589747  57                        PUSH EDI
00589748  8B F9                     MOV EDI,ECX
0058974A  6A 1D                     PUSH 0x1d
0058974C  68 3C B9 7C 00            PUSH 0x7cb93c
00589751  50                        PUSH EAX
00589752  8D B7 D5 01 00 00         LEA ESI,[EDI + 0x1d5]
00589758  6A 08                     PUSH 0x8
0058975A  8B CE                     MOV ECX,ESI
0058975C  83 CB FF                  OR EBX,0xffffffff
0058975F  E8 1F AA E7 FF            CALL 0x00404183
00589764  85 C0                     TEST EAX,EAX
00589766  0F 85 B0 00 00 00         JNZ 0x0058981c
0058976C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00589772  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00589778  8B CE                     MOV ECX,ESI
0058977A  52                        PUSH EDX
0058977B  6A 08                     PUSH 0x8
0058977D  E8 BE BA E7 FF            CALL 0x00405240
00589782  A1 74 67 80 00            MOV EAX,[0x00806774]
00589787  6A 1D                     PUSH 0x1d
00589789  68 44 B9 7C 00            PUSH 0x7cb944
0058978E  50                        PUSH EAX
0058978F  6A 0A                     PUSH 0xa
00589791  8B CE                     MOV ECX,ESI
00589793  E8 EB A9 E7 FF            CALL 0x00404183
00589798  6A 0A                     PUSH 0xa
0058979A  8B CE                     MOV ECX,ESI
0058979C  E8 92 9A E7 FF            CALL 0x00403233
005897A1  8B 0D B8 32 80 00         MOV ECX,dword ptr [0x008032b8]
005897A7  6A 10                     PUSH 0x10
005897A9  51                        PUSH ECX
005897AA  8B CE                     MOV ECX,ESI
005897AC  E8 3D AD E7 FF            CALL 0x004044ee
005897B1  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005897B7  8B CE                     MOV ECX,ESI
005897B9  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005897BF  50                        PUSH EAX
005897C0  6A 0A                     PUSH 0xa
005897C2  E8 79 BA E7 FF            CALL 0x00405240
005897C7  8B 17                     MOV EDX,dword ptr [EDI]
005897C9  8B CF                     MOV ECX,EDI
005897CB  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
005897D1  A1 64 67 80 00            MOV EAX,[0x00806764]
005897D6  6A 1D                     PUSH 0x1d
005897D8  68 50 B9 7C 00            PUSH 0x7cb950
005897DD  50                        PUSH EAX
005897DE  6A 09                     PUSH 0x9
005897E0  8B CE                     MOV ECX,ESI
005897E2  E8 9C A9 E7 FF            CALL 0x00404183
005897E7  85 C0                     TEST EAX,EAX
005897E9  75 2B                     JNZ 0x00589816
005897EB  6A 09                     PUSH 0x9
005897ED  8B CE                     MOV ECX,ESI
005897EF  E8 6D 8F E7 FF            CALL 0x00402761
005897F4  6A 09                     PUSH 0x9
005897F6  8B CE                     MOV ECX,ESI
005897F8  E8 AF 8A E7 FF            CALL 0x004022ac
005897FD  88 87 75 02 00 00         MOV byte ptr [EDI + 0x275],AL
00589803  8A 0D 58 B9 7C 00         MOV CL,byte ptr [0x007cb958]
00589809  88 8F 76 02 00 00         MOV byte ptr [EDI + 0x276],CL
0058980F  C6 87 77 02 00 00 00      MOV byte ptr [EDI + 0x277],0x0
LAB_00589816:
00589816  5F                        POP EDI
00589817  5E                        POP ESI
00589818  33 C0                     XOR EAX,EAX
0058981A  5B                        POP EBX
0058981B  C3                        RET
LAB_0058981c:
0058981C  5F                        POP EDI
0058981D  8B C3                     MOV EAX,EBX
0058981F  5E                        POP ESI
00589820  5B                        POP EBX
00589821  C3                        RET
