FUN_006bcd10:
006BCD10  A1 C8 4F 85 00            MOV EAX,[0x00854fc8]
006BCD15  53                        PUSH EBX
006BCD16  33 DB                     XOR EBX,EBX
006BCD18  56                        PUSH ESI
006BCD19  8D 50 FF                  LEA EDX,[EAX + -0x1]
006BCD1C  A1 98 4F 85 00            MOV EAX,[0x00854f98]
006BCD21  3B C3                     CMP EAX,EBX
006BCD23  57                        PUSH EDI
006BCD24  89 15 60 4F 85 00         MOV dword ptr [0x00854f60],EDX
006BCD2A  0F 85 89 03 00 00         JNZ 0x006bd0b9
006BCD30  BE 04 00 00 00            MOV ESI,0x4
006BCD35  BF 01 00 00 00            MOV EDI,0x1
LAB_006bcd3a:
006BCD3A  3B D3                     CMP EDX,EBX
006BCD3C  0F 8C 77 03 00 00         JL 0x006bd0b9
006BCD42  8B 0D DC 4F 85 00         MOV ECX,dword ptr [0x00854fdc]
006BCD48  8B 0C 91                  MOV ECX,dword ptr [ECX + EDX*0x4]
006BCD4B  89 0D 44 4F 85 00         MOV dword ptr [0x00854f44],ECX
006BCD51  8B 01                     MOV EAX,dword ptr [ECX]
006BCD53  A8 08                     TEST AL,0x8
006BCD55  0F 84 36 01 00 00         JZ 0x006bce91
006BCD5B  33 C9                     XOR ECX,ECX
006BCD5D  3B D3                     CMP EDX,EBX
006BCD5F  89 0D EC 4E 85 00         MOV dword ptr [0x00854eec],ECX
006BCD65  0F 8E 15 01 00 00         JLE 0x006bce80
LAB_006bcd6b:
006BCD6B  A1 DC 4F 85 00            MOV EAX,[0x00854fdc]
006BCD70  8B 04 88                  MOV EAX,dword ptr [EAX + ECX*0x4]
006BCD73  A3 D0 4F 85 00            MOV [0x00854fd0],EAX
006BCD78  F6 00 02                  TEST byte ptr [EAX],0x2
006BCD7B  74 09                     JZ 0x006bcd86
006BCD7D  39 70 68                  CMP dword ptr [EAX + 0x68],ESI
006BCD80  0F 8F DD 00 00 00         JG 0x006bce63
LAB_006bcd86:
006BCD86  8B 0D D4 4F 85 00         MOV ECX,dword ptr [0x00854fd4]
006BCD8C  83 C0 28                  ADD EAX,0x28
006BCD8F  8B 91 E4 01 00 00         MOV EDX,dword ptr [ECX + 0x1e4]
006BCD95  C1 E2 04                  SHL EDX,0x4
006BCD98  8D 4C 0A 14               LEA ECX,[EDX + ECX*0x1 + 0x14]
006BCD9C  51                        PUSH ECX
006BCD9D  50                        PUSH EAX
006BCD9E  68 08 4F 85 00            PUSH 0x854f08
006BCDA3  E8 08 31 01 00            CALL 0x006cfeb0
006BCDA8  83 C4 0C                  ADD ESP,0xc
006BCDAB  85 C0                     TEST EAX,EAX
006BCDAD  0F 84 A4 00 00 00         JZ 0x006bce57
006BCDB3  8B 15 14 4F 85 00         MOV EDX,dword ptr [0x00854f14]
006BCDB9  A1 10 4F 85 00            MOV EAX,[0x00854f10]
006BCDBE  8B 0D 0C 4F 85 00         MOV ECX,dword ptr [0x00854f0c]
006BCDC4  52                        PUSH EDX
006BCDC5  8B 15 08 4F 85 00         MOV EDX,dword ptr [0x00854f08]
006BCDCB  50                        PUSH EAX
006BCDCC  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BCDD1  51                        PUSH ECX
006BCDD2  52                        PUSH EDX
006BCDD3  50                        PUSH EAX
006BCDD4  E8 E7 02 00 00            CALL 0x006bd0c0
006BCDD9  85 C0                     TEST EAX,EAX
006BCDDB  74 7A                     JZ 0x006bce57
006BCDDD  8B 0D D0 4F 85 00         MOV ECX,dword ptr [0x00854fd0]
006BCDE3  C7 41 68 05 00 00 00      MOV dword ptr [ECX + 0x68],0x5
006BCDEA  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BCDEF  8B 08                     MOV ECX,dword ptr [EAX]
006BCDF1  83 C9 02                  OR ECX,0x2
006BCDF4  89 08                     MOV dword ptr [EAX],ECX
006BCDF6  8B 0D D0 4F 85 00         MOV ECX,dword ptr [0x00854fd0]
006BCDFC  8B 01                     MOV EAX,dword ptr [ECX]
006BCDFE  F6 C4 30                  TEST AH,0x30
006BCE01  75 0C                     JNZ 0x006bce0f
006BCE03  F6 C4 40                  TEST AH,0x40
006BCE06  74 4F                     JZ 0x006bce57
006BCE08  A9 00 00 02 00            TEST EAX,0x20000
006BCE0D  75 48                     JNZ 0x006bce57
LAB_006bce0f:
006BCE0F  0B C6                     OR EAX,ESI
006BCE11  57                        PUSH EDI
006BCE12  89 01                     MOV dword ptr [ECX],EAX
006BCE14  8B 0D D4 4F 85 00         MOV ECX,dword ptr [0x00854fd4]
006BCE1A  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
006BCE1D  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006BCE20  52                        PUSH EDX
006BCE21  50                        PUSH EAX
006BCE22  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BCE27  8B 89 C0 01 00 00         MOV ECX,dword ptr [ECX + 0x1c0]
006BCE2D  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006BCE30  52                        PUSH EDX
006BCE31  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006BCE34  52                        PUSH EDX
006BCE35  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006BCE38  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006BCE3B  52                        PUSH EDX
006BCE3C  50                        PUSH EAX
006BCE3D  6A 64                     PUSH 0x64
006BCE3F  51                        PUSH ECX
006BCE40  E8 8B 4C 01 00            CALL 0x006d1ad0
006BCE45  83 F8 FF                  CMP EAX,-0x1
006BCE48  A3 28 4F 85 00            MOV [0x00854f28],EAX
006BCE4D  74 25                     JZ 0x006bce74
006BCE4F  3B C3                     CMP EAX,EBX
006BCE51  0F 85 56 02 00 00         JNZ 0x006bd0ad
LAB_006bce57:
006BCE57  8B 0D EC 4E 85 00         MOV ECX,dword ptr [0x00854eec]
006BCE5D  8B 15 60 4F 85 00         MOV EDX,dword ptr [0x00854f60]
LAB_006bce63:
006BCE63  41                        INC ECX
006BCE64  3B CA                     CMP ECX,EDX
006BCE66  89 0D EC 4E 85 00         MOV dword ptr [0x00854eec],ECX
006BCE6C  0F 8C F9 FE FF FF         JL 0x006bcd6b
006BCE72  EB 0C                     JMP 0x006bce80
LAB_006bce74:
006BCE74  8B 15 60 4F 85 00         MOV EDX,dword ptr [0x00854f60]
006BCE7A  89 3D 98 4F 85 00         MOV dword ptr [0x00854f98],EDI
LAB_006bce80:
006BCE80  39 1D 6C 4F 85 00         CMP dword ptr [0x00854f6c],EBX
006BCE86  0F 85 2D 02 00 00         JNZ 0x006bd0b9
006BCE8C  E9 07 02 00 00            JMP 0x006bd098
LAB_006bce91:
006BCE91  A8 02                     TEST AL,0x2
006BCE93  0F 84 FF 01 00 00         JZ 0x006bd098
006BCE99  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BCE9E  8B 51 44                  MOV EDX,dword ptr [ECX + 0x44]
006BCEA1  3B 90 E8 01 00 00         CMP EDX,dword ptr [EAX + 0x1e8]
006BCEA7  7E 58                     JLE 0x006bcf01
006BCEA9  39 98 DC 01 00 00         CMP dword ptr [EAX + 0x1dc],EBX
006BCEAF  74 50                     JZ 0x006bcf01
006BCEB1  8B 90 E4 01 00 00         MOV EDX,dword ptr [EAX + 0x1e4]
006BCEB7  83 C1 28                  ADD ECX,0x28
006BCEBA  C1 E2 04                  SHL EDX,0x4
006BCEBD  8D 44 02 14               LEA EAX,[EDX + EAX*0x1 + 0x14]
006BCEC1  50                        PUSH EAX
006BCEC2  51                        PUSH ECX
006BCEC3  68 08 4F 85 00            PUSH 0x854f08
006BCEC8  E8 E3 2F 01 00            CALL 0x006cfeb0
006BCECD  83 C4 0C                  ADD ESP,0xc
006BCED0  85 C0                     TEST EAX,EAX
006BCED2  74 27                     JZ 0x006bcefb
006BCED4  8B 0D 14 4F 85 00         MOV ECX,dword ptr [0x00854f14]
006BCEDA  8B 15 10 4F 85 00         MOV EDX,dword ptr [0x00854f10]
006BCEE0  A1 0C 4F 85 00            MOV EAX,[0x00854f0c]
006BCEE5  51                        PUSH ECX
006BCEE6  8B 0D 08 4F 85 00         MOV ECX,dword ptr [0x00854f08]
006BCEEC  52                        PUSH EDX
006BCEED  8B 15 D4 4F 85 00         MOV EDX,dword ptr [0x00854fd4]
006BCEF3  50                        PUSH EAX
006BCEF4  51                        PUSH ECX
006BCEF5  52                        PUSH EDX
006BCEF6  E8 35 FC FF FF            CALL 0x006bcb30
LAB_006bcefb:
006BCEFB  8B 0D 44 4F 85 00         MOV ECX,dword ptr [0x00854f44]
LAB_006bcf01:
006BCF01  A1 60 4F 85 00            MOV EAX,[0x00854f60]
006BCF06  33 D2                     XOR EDX,EDX
006BCF08  3B C3                     CMP EAX,EBX
006BCF0A  89 15 EC 4E 85 00         MOV dword ptr [0x00854eec],EDX
006BCF10  0F 8E 74 01 00 00         JLE 0x006bd08a
LAB_006bcf16:
006BCF16  A1 DC 4F 85 00            MOV EAX,[0x00854fdc]
006BCF1B  8B 04 90                  MOV EAX,dword ptr [EAX + EDX*0x4]
006BCF1E  A3 D0 4F 85 00            MOV [0x00854fd0],EAX
006BCF23  F6 00 02                  TEST byte ptr [EAX],0x2
006BCF26  74 09                     JZ 0x006bcf31
006BCF28  39 70 68                  CMP dword ptr [EAX + 0x68],ESI
006BCF2B  0F 8F 3D 01 00 00         JG 0x006bd06e
LAB_006bcf31:
006BCF31  89 1D DC 4E 85 00         MOV dword ptr [0x00854edc],EBX
006BCF37  39 71 68                  CMP dword ptr [ECX + 0x68],ESI
006BCF3A  0F 8E 2E 01 00 00         JLE 0x006bd06e
006BCF40  83 C1 28                  ADD ECX,0x28
006BCF43  8D 50 04                  LEA EDX,[EAX + 0x4]
006BCF46  51                        PUSH ECX
006BCF47  B9 08 4F 85 00            MOV ECX,0x854f08
006BCF4C  E8 0F 35 FF FF            CALL 0x006b0460
006BCF51  85 C0                     TEST EAX,EAX
006BCF53  74 45                     JZ 0x006bcf9a
006BCF55  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BCF5A  8B 08                     MOV ECX,dword ptr [EAX]
006BCF5C  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006BCF5F  81 E1 00 20 00 00         AND ECX,0x2000
006BCF65  F7 D9                     NEG ECX
006BCF67  1B C9                     SBB ECX,ECX
006BCF69  83 C0 68                  ADD EAX,0x68
006BCF6C  51                        PUSH ECX
006BCF6D  8B 48 A4                  MOV ECX,dword ptr [EAX + -0x5c]
006BCF70  52                        PUSH EDX
006BCF71  8B 15 14 4F 85 00         MOV EDX,dword ptr [0x00854f14]
006BCF77  51                        PUSH ECX
006BCF78  8B 0D 10 4F 85 00         MOV ECX,dword ptr [0x00854f10]
006BCF7E  52                        PUSH EDX
006BCF7F  8B 15 0C 4F 85 00         MOV EDX,dword ptr [0x00854f0c]
006BCF85  51                        PUSH ECX
006BCF86  8B 0D 08 4F 85 00         MOV ECX,dword ptr [0x00854f08]
006BCF8C  52                        PUSH EDX
006BCF8D  51                        PUSH ECX
006BCF8E  56                        PUSH ESI
006BCF8F  50                        PUSH EAX
006BCF90  E8 3B 4B 01 00            CALL 0x006d1ad0
006BCF95  A3 DC 4E 85 00            MOV [0x00854edc],EAX
LAB_006bcf9a:
006BCF9A  39 1D DC 4E 85 00         CMP dword ptr [0x00854edc],EBX
006BCFA0  0F 84 BC 00 00 00         JZ 0x006bd062
006BCFA6  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BCFAB  8B 08                     MOV ECX,dword ptr [EAX]
006BCFAD  83 C9 02                  OR ECX,0x2
006BCFB0  89 08                     MOV dword ptr [EAX],ECX
006BCFB2  8B 0D D0 4F 85 00         MOV ECX,dword ptr [0x00854fd0]
006BCFB8  8B 01                     MOV EAX,dword ptr [ECX]
006BCFBA  F6 C4 30                  TEST AH,0x30
006BCFBD  75 14                     JNZ 0x006bcfd3
006BCFBF  F6 C4 40                  TEST AH,0x40
006BCFC2  0F 84 9A 00 00 00         JZ 0x006bd062
006BCFC8  A9 00 00 02 00            TEST EAX,0x20000
006BCFCD  0F 85 8F 00 00 00         JNZ 0x006bd062
LAB_006bcfd3:
006BCFD3  0B C6                     OR EAX,ESI
006BCFD5  89 01                     MOV dword ptr [ECX],EAX
006BCFD7  8B 15 44 4F 85 00         MOV EDX,dword ptr [0x00854f44]
006BCFDD  8B 02                     MOV EAX,dword ptr [EDX]
006BCFDF  F6 C4 20                  TEST AH,0x20
006BCFE2  74 3E                     JZ 0x006bd022
006BCFE4  83 3D DC 4E 85 00 FF      CMP dword ptr [0x00854edc],-0x1
006BCFEB  74 35                     JZ 0x006bd022
006BCFED  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BCFF2  57                        PUSH EDI
006BCFF3  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006BCFF6  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006BCFF9  8B 80 C0 01 00 00         MOV EAX,dword ptr [EAX + 0x1c0]
006BCFFF  51                        PUSH ECX
006BD000  8B 0D 14 4F 85 00         MOV ECX,dword ptr [0x00854f14]
006BD006  52                        PUSH EDX
006BD007  8B 15 10 4F 85 00         MOV EDX,dword ptr [0x00854f10]
006BD00D  51                        PUSH ECX
006BD00E  8B 0D 0C 4F 85 00         MOV ECX,dword ptr [0x00854f0c]
006BD014  52                        PUSH EDX
006BD015  8B 15 08 4F 85 00         MOV EDX,dword ptr [0x00854f08]
006BD01B  51                        PUSH ECX
006BD01C  52                        PUSH EDX
006BD01D  6A 64                     PUSH 0x64
006BD01F  50                        PUSH EAX
006BD020  EB 2D                     JMP 0x006bd04f
LAB_006bd022:
006BD022  8B 0D D4 4F 85 00         MOV ECX,dword ptr [0x00854fd4]
006BD028  57                        PUSH EDI
006BD029  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
006BD02C  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006BD02F  52                        PUSH EDX
006BD030  50                        PUSH EAX
006BD031  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BD036  8B 89 C0 01 00 00         MOV ECX,dword ptr [ECX + 0x1c0]
006BD03C  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006BD03F  52                        PUSH EDX
006BD040  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006BD043  52                        PUSH EDX
006BD044  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006BD047  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006BD04A  52                        PUSH EDX
006BD04B  50                        PUSH EAX
006BD04C  6A 64                     PUSH 0x64
006BD04E  51                        PUSH ECX
LAB_006bd04f:
006BD04F  E8 7C 4A 01 00            CALL 0x006d1ad0
006BD054  83 F8 FF                  CMP EAX,-0x1
006BD057  A3 28 4F 85 00            MOV [0x00854f28],EAX
006BD05C  74 26                     JZ 0x006bd084
006BD05E  3B C3                     CMP EAX,EBX
006BD060  75 4B                     JNZ 0x006bd0ad
LAB_006bd062:
006BD062  8B 0D 44 4F 85 00         MOV ECX,dword ptr [0x00854f44]
006BD068  8B 15 EC 4E 85 00         MOV EDX,dword ptr [0x00854eec]
LAB_006bd06e:
006BD06E  A1 60 4F 85 00            MOV EAX,[0x00854f60]
006BD073  42                        INC EDX
006BD074  3B D0                     CMP EDX,EAX
006BD076  89 15 EC 4E 85 00         MOV dword ptr [0x00854eec],EDX
006BD07C  0F 8C 94 FE FF FF         JL 0x006bcf16
006BD082  EB 06                     JMP 0x006bd08a
LAB_006bd084:
006BD084  89 3D 98 4F 85 00         MOV dword ptr [0x00854f98],EDI
LAB_006bd08a:
006BD08A  39 1D 6C 4F 85 00         CMP dword ptr [0x00854f6c],EBX
006BD090  75 27                     JNZ 0x006bd0b9
006BD092  8B 15 60 4F 85 00         MOV EDX,dword ptr [0x00854f60]
LAB_006bd098:
006BD098  A1 98 4F 85 00            MOV EAX,[0x00854f98]
006BD09D  4A                        DEC EDX
006BD09E  3B C3                     CMP EAX,EBX
006BD0A0  89 15 60 4F 85 00         MOV dword ptr [0x00854f60],EDX
006BD0A6  75 11                     JNZ 0x006bd0b9
006BD0A8  E9 8D FC FF FF            JMP 0x006bcd3a
LAB_006bd0ad:
006BD0AD  48                        DEC EAX
006BD0AE  89 3D 6C 4F 85 00         MOV dword ptr [0x00854f6c],EDI
006BD0B4  A3 28 4F 85 00            MOV [0x00854f28],EAX
LAB_006bd0b9:
006BD0B9  5F                        POP EDI
006BD0BA  5E                        POP ESI
006BD0BB  5B                        POP EBX
006BD0BC  C3                        RET
