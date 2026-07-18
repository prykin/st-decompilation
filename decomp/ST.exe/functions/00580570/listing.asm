FUN_00580570:
00580570  56                        PUSH ESI
00580571  8B F1                     MOV ESI,ECX
00580573  33 C0                     XOR EAX,EAX
00580575  89 86 5D 02 00 00         MOV dword ptr [ESI + 0x25d],EAX
0058057B  89 86 69 02 00 00         MOV dword ptr [ESI + 0x269],EAX
00580581  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
00580587  3D DC 00 00 00            CMP EAX,0xdc
0058058C  72 1C                     JC 0x005805aa
0058058E  3D DE 00 00 00            CMP EAX,0xde
00580593  76 07                     JBE 0x0058059c
00580595  3D E0 00 00 00            CMP EAX,0xe0
0058059A  75 0E                     JNZ 0x005805aa
LAB_0058059c:
0058059C  8B CE                     MOV ECX,ESI
0058059E  E8 16 10 E8 FF            CALL 0x004015b9
005805A3  8B CE                     MOV ECX,ESI
005805A5  E8 F1 0A E8 FF            CALL 0x0040109b
LAB_005805aa:
005805AA  5E                        POP ESI
005805AB  C3                        RET
