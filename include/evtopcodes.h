#pragma once

enum EvtOpcode : s16 {
    Next,
    EvtEnd,
    Return,
    Lbl,
    Goto,
    Do,
    While,
    DoBreak,
    DoContinue,
    WaitFrm,
    WaitMsec,
    Halt,
    IfStrEqual,
    IfStrNotEqual,
    IfStrSmall,
    IfStrLarge,
    IfStrSmallEqual,
    IfStrLargeEqual,
    IffEqual,
    IffNotEqual,
    IffSmall,
    IffLarge,
    IffSmallEqual,
    IffLargeEqual,
    IfEqual,
    IfNotEqual,
    IfSmall,
    IfLarge,
    IfSmallEqual,
    IfLargeEqual,
    IfFlag,
    IfNotFlag,
    Else,
    EndIf,
    Switch,
    Switchi,
    CaseEqual,
    CaseNotEqual,
    CaseSmall,
    CaseLarge,
    CaseSmallEqual,
    CaseLargeEqual,
    CaseEtc,
    CaseOr,
    CaseAnd,
    CaseFlag,
    CaseEnd,
    CaseBetween,
    SwitchBreak,
    EndSwitch,
    Set,
    Seti,
    Setf,
    Add,
    Sub,
    Mul,
    Div,
    Mod,
    Addf,
    Subf,
    Mulf,
    Divf,
    SetRead,
    Read,
    Read2,
    Read3,
    Read4,
    ReadN,
    SetReadf,
    Readf,
    Readf2,
    Readf3,
    Readf4,
    ReadfN,
    ClampInt,
    SetUserWrk,
    SetUserFlg,
    AllocUserWrk,
    And,
    Andi,
    Or,
    Ori,
    SetFrameFromMse,
    SetMescFromFram,
    SetRam,
    SetRamf,
    GetRam,
    GetRamf,
    Setr,
    Setrf,
    Getr,
    Getrf,
    UserFunc,
    RunEvt,
    RunEvtId,
    RunChildEvt,
    DeleteEvt,
    RestartEvt,
    SetPri,
    SetSpd,
    SetType,
    StopAll,
    StartAll,
    StopOther,
    StartOther,
    StopId,
    StartId,
    ChkEvt,
    InlineEvt,
    InlineEvtId,
    EndInline,
    BrotherEvt,
    BrotherEvtId,
    EndBrother,
    DebugPutMsg,
    DebugMsgClear,
    DebugPutReg,
    DebugName,
    DebugRem,
    DebugBp,
    // Custom
    Call,
    ReturnFromCall
};