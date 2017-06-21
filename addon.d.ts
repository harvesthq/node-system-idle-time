interface SystemIdleTime {
  getIdleTime(): number
}

declare var HarvestSystemIdleTime: SystemIdleTime

declare module '@harvesthq/system-idle-time' {
  export = HarvestSystemIdleTime
}
