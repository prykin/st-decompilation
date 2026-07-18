FUN_00584b10:
00584B10  56                        PUSH ESI
00584B11  57                        PUSH EDI
00584B12  8B F9                     MOV EDI,ECX
00584B14  6A 0E                     PUSH 0xe
00584B16  8D B7 D5 01 00 00         LEA ESI,[EDI + 0x1d5]
00584B1C  8B CE                     MOV ECX,ESI
00584B1E  E8 41 F7 E7 FF            CALL 0x00404264
00584B23  8B CE                     MOV ECX,ESI
00584B25  E8 66 DF E7 FF            CALL 0x00402a90
00584B2A  A1 74 67 80 00            MOV EAX,[0x00806774]
00584B2F  6A 1D                     PUSH 0x1d
00584B31  68 C0 B8 7C 00            PUSH 0x7cb8c0
00584B36  50                        PUSH EAX
00584B37  6A 08                     PUSH 0x8
00584B39  8B CE                     MOV ECX,ESI
00584B3B  E8 43 F6 E7 FF            CALL 0x00404183
00584B40  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00584B46  6A 1D                     PUSH 0x1d
00584B48  68 C8 B8 7C 00            PUSH 0x7cb8c8
00584B4D  51                        PUSH ECX
00584B4E  6A 0A                     PUSH 0xa
00584B50  8B CE                     MOV ECX,ESI
00584B52  E8 2C F6 E7 FF            CALL 0x00404183
00584B57  6A 45                     PUSH 0x45
00584B59  6A 5A                     PUSH 0x5a
00584B5B  6A 01                     PUSH 0x1
00584B5D  8B CE                     MOV ECX,ESI
00584B5F  E8 68 07 E8 FF            CALL 0x004052cc
00584B64  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
00584B6A  50                        PUSH EAX
00584B6B  E8 70 59 16 00            CALL 0x006ea4e0
00584B70  6A 0A                     PUSH 0xa
00584B72  8B CE                     MOV ECX,ESI
00584B74  E8 BA E6 E7 FF            CALL 0x00403233
00584B79  8B 15 B8 32 80 00         MOV EDX,dword ptr [0x008032b8]
00584B7F  6A 10                     PUSH 0x10
00584B81  52                        PUSH EDX
00584B82  8B CE                     MOV ECX,ESI
00584B84  E8 65 F9 E7 FF            CALL 0x004044ee
00584B89  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00584B8E  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00584B94  51                        PUSH ECX
00584B95  6A 0A                     PUSH 0xa
00584B97  8B CE                     MOV ECX,ESI
00584B99  E8 A2 06 E8 FF            CALL 0x00405240
00584B9E  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00584BA4  8B CE                     MOV ECX,ESI
00584BA6  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00584BAC  50                        PUSH EAX
00584BAD  6A 08                     PUSH 0x8
00584BAF  E8 8C 06 E8 FF            CALL 0x00405240
00584BB4  8B 17                     MOV EDX,dword ptr [EDI]
00584BB6  8B CF                     MOV ECX,EDI
00584BB8  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00584BBE  A1 64 67 80 00            MOV EAX,[0x00806764]
00584BC3  6A 1D                     PUSH 0x1d
00584BC5  68 D4 B8 7C 00            PUSH 0x7cb8d4
00584BCA  50                        PUSH EAX
00584BCB  6A 09                     PUSH 0x9
00584BCD  8B CE                     MOV ECX,ESI
00584BCF  E8 AF F5 E7 FF            CALL 0x00404183
00584BD4  85 C0                     TEST EAX,EAX
00584BD6  75 2B                     JNZ 0x00584c03
00584BD8  6A 09                     PUSH 0x9
00584BDA  8B CE                     MOV ECX,ESI
00584BDC  E8 80 DB E7 FF            CALL 0x00402761
00584BE1  6A 09                     PUSH 0x9
00584BE3  8B CE                     MOV ECX,ESI
00584BE5  E8 C2 D6 E7 FF            CALL 0x004022ac
00584BEA  88 87 55 02 00 00         MOV byte ptr [EDI + 0x255],AL
00584BF0  8A 0D E0 B8 7C 00         MOV CL,byte ptr [0x007cb8e0]
00584BF6  88 8F 56 02 00 00         MOV byte ptr [EDI + 0x256],CL
00584BFC  C6 87 57 02 00 00 00      MOV byte ptr [EDI + 0x257],0x0
LAB_00584c03:
00584C03  5F                        POP EDI
00584C04  5E                        POP ESI
00584C05  C3                        RET
