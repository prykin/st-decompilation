FUN_0073f396:
0073F396  50                        PUSH EAX
0073F397  53                        PUSH EBX
0073F398  51                        PUSH ECX
0073F399  8B 44 24 16               MOV EAX,dword ptr [ESP + 0x16]
0073F39D  35 00 07 00 00            XOR EAX,0x700
0073F3A2  A9 00 07 00 00            TEST EAX,0x700
0073F3A7  0F 85 83 01 00 00         JNZ 0x0073f530
0073F3AD  C1 E8 0B                  SHR EAX,0xb
0073F3B0  83 E0 0F                  AND EAX,0xf
0073F3B3  80 B8 5C 23 7F 00 00      CMP byte ptr [EAX + 0x7f235c],0x0
0073F3BA  0F 84 70 01 00 00         JZ 0x0073f530
0073F3C0  8B 44 24 16               MOV EAX,dword ptr [ESP + 0x16]
0073F3C4  25 00 00 FF 7F            AND EAX,0x7fff0000
0073F3C9  3D 00 00 FF 7F            CMP EAX,0x7fff0000
0073F3CE  0F 84 5C 01 00 00         JZ 0x0073f530
0073F3D4  8B 44 24 2E               MOV EAX,dword ptr [ESP + 0x2e]
0073F3D8  25 00 00 FF 7F            AND EAX,0x7fff0000
0073F3DD  0F 84 4D 01 00 00         JZ 0x0073f530
0073F3E3  3D 00 00 FF 7F            CMP EAX,0x7fff0000
0073F3E8  0F 84 42 01 00 00         JZ 0x0073f530
0073F3EE  8B 44 24 2C               MOV EAX,dword ptr [ESP + 0x2c]
0073F3F2  03 C0                     ADD EAX,EAX
0073F3F4  0F 85 36 01 00 00         JNZ 0x0073f530
0073F3FA  8B 44 24 14               MOV EAX,dword ptr [ESP + 0x14]
0073F3FE  03 C0                     ADD EAX,EAX
0073F400  0F 85 2A 01 00 00         JNZ 0x0073f530
0073F406  8B 44 24 18               MOV EAX,dword ptr [ESP + 0x18]
0073F40A  25 FF 7F 00 00            AND EAX,0x7fff
0073F40F  83 C0 3F                  ADD EAX,0x3f
0073F412  8B 5C 24 30               MOV EBX,dword ptr [ESP + 0x30]
0073F416  81 E3 FF 7F 00 00         AND EBX,0x7fff
0073F41C  2B D8                     SUB EBX,EAX
0073F41E  77 5E                     JA 0x0073f47e
LAB_0073f420:
0073F420  8B 44 24 18               MOV EAX,dword ptr [ESP + 0x18]
0073F424  25 FF 7F 00 00            AND EAX,0x7fff
0073F429  83 C0 0A                  ADD EAX,0xa
0073F42C  8B 5C 24 30               MOV EBX,dword ptr [ESP + 0x30]
0073F430  81 E3 FF 7F 00 00         AND EBX,0x7fff
0073F436  2B D8                     SUB EBX,EAX
0073F438  0F 88 F2 00 00 00         JS 0x0073f530
0073F43E  DB 6C 24 28               FLD extended double ptr [ESP + 0x28]
0073F442  8B 44 24 18               MOV EAX,dword ptr [ESP + 0x18]
0073F446  8B 5C 24 30               MOV EBX,dword ptr [ESP + 0x30]
0073F44A  81 E3 FF 7F 00 00         AND EBX,0x7fff
0073F450  8B CB                     MOV ECX,EBX
0073F452  2B D8                     SUB EBX,EAX
0073F454  83 E3 07                  AND EBX,0x7
0073F457  83 CB 04                  OR EBX,0x4
0073F45A  2B CB                     SUB ECX,EBX
0073F45C  8B D8                     MOV EBX,EAX
0073F45E  81 E3 00 80 00 00         AND EBX,0x8000
0073F464  0B CB                     OR ECX,EBX
0073F466  89 4C 24 18               MOV dword ptr [ESP + 0x18],ECX
0073F46A  DB 6C 24 10               FLD extended double ptr [ESP + 0x10]
0073F46E  89 44 24 18               MOV dword ptr [ESP + 0x18],EAX
0073F472  D9 C9                     FXCH
0073F474  D9 F8                     FPREM
0073F476  DB 7C 24 28               FSTP extended double ptr [ESP + 0x28]
0073F47A  DD D8                     FSTP ST0
0073F47C  EB A2                     JMP 0x0073f420
LAB_0073f47e:
0073F47E  F7 C2 02 00 00 00         TEST EDX,0x2
0073F484  75 08                     JNZ 0x0073f48e
0073F486  DB 6C 24 10               FLD extended double ptr [ESP + 0x10]
0073F48A  DB 7C 24 1C               FSTP extended double ptr [ESP + 0x1c]
LAB_0073f48e:
0073F48E  D9 7C 24 34               FNSTCW word ptr [ESP + 0x34]
0073F492  8B 44 24 34               MOV EAX,dword ptr [ESP + 0x34]
0073F496  0D 3F 03 00 00            OR EAX,0x33f
0073F49B  89 44 24 38               MOV dword ptr [ESP + 0x38],EAX
0073F49F  D9 6C 24 38               FLDCW word ptr [ESP + 0x38]
0073F4A3  8B 44 24 18               MOV EAX,dword ptr [ESP + 0x18]
0073F4A7  25 FF 7F 00 00            AND EAX,0x7fff
0073F4AC  8B 5C 24 30               MOV EBX,dword ptr [ESP + 0x30]
0073F4B0  81 E3 FF 7F 00 00         AND EBX,0x7fff
0073F4B6  2B D8                     SUB EBX,EAX
0073F4B8  83 E3 3F                  AND EBX,0x3f
0073F4BB  83 CB 20                  OR EBX,0x20
0073F4BE  83 C3 01                  ADD EBX,0x1
0073F4C1  8B CB                     MOV ECX,EBX
0073F4C3  8B 44 24 18               MOV EAX,dword ptr [ESP + 0x18]
0073F4C7  8B 5C 24 30               MOV EBX,dword ptr [ESP + 0x30]
0073F4CB  81 E3 FF 7F 00 00         AND EBX,0x7fff
0073F4D1  25 00 80 00 00            AND EAX,0x8000
0073F4D6  0B D8                     OR EBX,EAX
0073F4D8  89 5C 24 18               MOV dword ptr [ESP + 0x18],EBX
0073F4DC  DB 6C 24 10               FLD extended double ptr [ESP + 0x10]
0073F4E0  D9 E1                     FABS
0073F4E2  DB 6C 24 28               FLD extended double ptr [ESP + 0x28]
0073F4E6  D9 E1                     FABS
LAB_0073f4e8:
0073F4E8  D8 D1                     FCOM
0073F4EA  DF E0                     FNSTSW AX
0073F4EC  25 00 01 00 00            AND EAX,0x100
0073F4F1  75 02                     JNZ 0x0073f4f5
0073F4F3  D8 E1                     FSUB ST0,ST1
LAB_0073f4f5:
0073F4F5  D9 C9                     FXCH
0073F4F7  DC 0D 8C 23 7F 00         FMUL double ptr [0x007f238c]
0073F4FD  D9 C9                     FXCH
0073F4FF  83 E9 01                  SUB ECX,0x1
0073F502  75 E4                     JNZ 0x0073f4e8
0073F504  8B 5C 24 30               MOV EBX,dword ptr [ESP + 0x30]
0073F508  DB 7C 24 28               FSTP extended double ptr [ESP + 0x28]
0073F50C  DD D8                     FSTP ST0
0073F50E  DB 6C 24 1C               FLD extended double ptr [ESP + 0x1c]
0073F512  DB 2D 94 23 7F 00         FLD extended double ptr [0x007f2394]
0073F518  D9 F8                     FPREM
0073F51A  DD D8                     FSTP ST0
0073F51C  DB 6C 24 28               FLD extended double ptr [ESP + 0x28]
0073F520  D9 6C 24 34               FLDCW word ptr [ESP + 0x34]
0073F524  81 E3 00 80 00 00         AND EBX,0x8000
0073F52A  74 0E                     JZ 0x0073f53a
0073F52C  D9 E0                     FCHS
0073F52E  EB 0A                     JMP 0x0073f53a
LAB_0073f530:
0073F530  DB 6C 24 10               FLD extended double ptr [ESP + 0x10]
0073F534  DB 6C 24 28               FLD extended double ptr [ESP + 0x28]
0073F538  D9 F8                     FPREM
LAB_0073f53a:
0073F53A  F7 C2 03 00 00 00         TEST EDX,0x3
0073F540  74 56                     JZ 0x0073f598
0073F542  DD 7C 24 3C               FNSTSW word ptr [ESP + 0x3c]
0073F546  F7 C2 01 00 00 00         TEST EDX,0x1
0073F54C  74 1F                     JZ 0x0073f56d
0073F54E  D9 7C 24 34               FNSTCW word ptr [ESP + 0x34]
0073F552  8B 44 24 34               MOV EAX,dword ptr [ESP + 0x34]
0073F556  0D 00 03 00 00            OR EAX,0x300
0073F55B  89 44 24 38               MOV dword ptr [ESP + 0x38],EAX
0073F55F  D9 6C 24 38               FLDCW word ptr [ESP + 0x38]
0073F563  DC 0D 7C 23 7F 00         FMUL double ptr [0x007f237c]
0073F569  D9 6C 24 34               FLDCW word ptr [ESP + 0x34]
LAB_0073f56d:
0073F56D  8B 44 24 3C               MOV EAX,dword ptr [ESP + 0x3c]
0073F571  D9 C9                     FXCH
0073F573  DD D8                     FSTP ST0
0073F575  DB 6C 24 1C               FLD extended double ptr [ESP + 0x1c]
0073F579  D9 C9                     FXCH
0073F57B  25 00 43 00 00            AND EAX,0x4300
0073F580  83 EC 1C                  SUB ESP,0x1c
0073F583  D9 34 24                  FNSTENV [ESP]
0073F586  81 64 24 04 FF BC 00 00   AND dword ptr [ESP + 0x4],0xbcff
0073F58E  09 44 24 04               OR dword ptr [ESP + 0x4],EAX
0073F592  D9 24 24                  FLDENV [ESP]
0073F595  83 C4 1C                  ADD ESP,0x1c
LAB_0073f598:
0073F598  59                        POP ECX
0073F599  5B                        POP EBX
0073F59A  58                        POP EAX
0073F59B  C3                        RET
