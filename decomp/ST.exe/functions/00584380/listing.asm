STJellyGunC::sub_00584380:
00584380  A1 74 67 80 00            MOV EAX,[0x00806774]
00584385  53                        PUSH EBX
00584386  56                        PUSH ESI
00584387  57                        PUSH EDI
00584388  8B F9                     MOV EDI,ECX
0058438A  6A 1D                     PUSH 0x1d
0058438C  68 F8 B3 7C 00            PUSH 0x7cb3f8
00584391  50                        PUSH EAX
00584392  8D B7 D5 01 00 00         LEA ESI,[EDI + 0x1d5]
00584398  6A 08                     PUSH 0x8
0058439A  8B CE                     MOV ECX,ESI
0058439C  83 CB FF                  OR EBX,0xffffffff
0058439F  E8 DF FD E7 FF            CALL 0x00404183
005843A4  85 C0                     TEST EAX,EAX
005843A6  0F 85 BA 00 00 00         JNZ 0x00584466
005843AC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005843B2  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005843B8  8B CE                     MOV ECX,ESI
005843BA  52                        PUSH EDX
005843BB  6A 08                     PUSH 0x8
005843BD  E8 7E 0E E8 FF            CALL 0x00405240
005843C2  A1 74 67 80 00            MOV EAX,[0x00806774]
005843C7  6A 1D                     PUSH 0x1d
005843C9  68 00 B4 7C 00            PUSH 0x7cb400
005843CE  50                        PUSH EAX
005843CF  6A 0A                     PUSH 0xa
005843D1  8B CE                     MOV ECX,ESI
005843D3  E8 AB FD E7 FF            CALL 0x00404183
005843D8  6A 0A                     PUSH 0xa
005843DA  8B CE                     MOV ECX,ESI
005843DC  E8 52 EE E7 FF            CALL 0x00403233
005843E1  8B 0D B8 32 80 00         MOV ECX,dword ptr [0x008032b8]
005843E7  6A 10                     PUSH 0x10
005843E9  51                        PUSH ECX
005843EA  8B CE                     MOV ECX,ESI
005843EC  E8 FD 00 E8 FF            CALL 0x004044ee
005843F1  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005843F7  8B CE                     MOV ECX,ESI
005843F9  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005843FF  50                        PUSH EAX
00584400  6A 0A                     PUSH 0xa
00584402  E8 39 0E E8 FF            CALL 0x00405240
00584407  8B 17                     MOV EDX,dword ptr [EDI]
00584409  8B CF                     MOV ECX,EDI
0058440B  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00584411  A1 64 67 80 00            MOV EAX,[0x00806764]
00584416  6A 1D                     PUSH 0x1d
00584418  68 0C B4 7C 00            PUSH 0x7cb40c
0058441D  50                        PUSH EAX
0058441E  6A 09                     PUSH 0x9
00584420  8B CE                     MOV ECX,ESI
00584422  E8 5C FD E7 FF            CALL 0x00404183
00584427  85 C0                     TEST EAX,EAX
00584429  75 2B                     JNZ 0x00584456
0058442B  6A 09                     PUSH 0x9
0058442D  8B CE                     MOV ECX,ESI
0058442F  E8 2D E3 E7 FF            CALL 0x00402761
00584434  6A 09                     PUSH 0x9
00584436  8B CE                     MOV ECX,ESI
00584438  E8 6F DE E7 FF            CALL 0x004022ac
0058443D  88 87 4F 02 00 00         MOV byte ptr [EDI + 0x24f],AL
00584443  8A 0D 14 B4 7C 00         MOV CL,byte ptr [0x007cb414]
00584449  88 8F 50 02 00 00         MOV byte ptr [EDI + 0x250],CL
0058444F  C6 87 51 02 00 00 00      MOV byte ptr [EDI + 0x251],0x0
LAB_00584456:
00584456  C7 87 39 02 00 00 64 00 00 00  MOV dword ptr [EDI + 0x239],0x64
00584460  5F                        POP EDI
00584461  5E                        POP ESI
00584462  33 C0                     XOR EAX,EAX
00584464  5B                        POP EBX
00584465  C3                        RET
LAB_00584466:
00584466  5F                        POP EDI
00584467  8B C3                     MOV EAX,EBX
00584469  5E                        POP ESI
0058446A  5B                        POP EBX
0058446B  C3                        RET
